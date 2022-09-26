#include <isa.h>
#include <memory/paddr.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ASNI_FMT(str(__GUEST_ISA__), ASNI_FG_YELLOW ASNI_BG_RED));
  printf("For help, type \"help\"\n");
//  Log("Exercise: Please remove me in the source code and compile NEMU again.");
//  assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>
#include <elf.h>

void sdb_set_batch_mode();

static char *elf_file = NULL;
static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static char strtab_buf[65536];

struct func_lut_t{
  char name[64];
  uint64_t staddr;
  uint64_t edaddr;
}funcs[1024];
int tot_func = 0;
int func_start = 0;
int func_entry(uint64_t addr){
  for(int i = 0; i < tot_func; i++){
    if(addr == funcs[i].staddr){
      return i;
    }
  }
  return -1;
}

int func_in(uint64_t addr){
  int now_func = func_start;
  for(int i = 0; i < tot_func; i++){
    if(addr >= funcs[i].staddr && addr < funcs[i].edaddr){
      now_func = i;
      break;
    }
  }
  return now_func;
}

int func_leave(uint64_t addr, uint64_t pc){
  int now = func_in(pc);
  if(addr >= funcs[now].staddr && addr < funcs[now].edaddr)
    return -1;//not a call or ret
  
  int tar = func_entry(addr);
  if(tar == -1) return now;
  else return -1;
}

static int stn = 0;
void log_func(int func, bool flag){
  if(func == -1) return;
  if(flag == 0){//call
    for(int i = 1; i <= stn; i++){
      printf(" ");
    }
    printf("call [%s @%p]\n",funcs[func].name,(char *)funcs[func].staddr);
    stn++;
  }
  else{
    stn--;
    for(int i = 1; i <= stn; i++){
      printf("  ");
    }
    printf("ret [%s]\n",funcs[func].name);
  }
}
static void load_elf() {
  if (elf_file == NULL) {
    Log("No elf is given.");
    return;
  }

  FILE *fp = fopen(elf_file, "rb");
  Assert(fp, "Can not open '%s'", elf_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The elf is %s, size = %ld", elf_file, size);

  fseek(fp, 0, SEEK_SET);
  Elf64_Ehdr elf;
  int ret = fread(&elf, sizeof(Elf64_Ehdr), 1, fp);
  assert(ret == 1);
  
  //printf("elf = %p\n",elf);
  assert(*(uint32_t *)(&elf)->e_ident == 0x464c457f);
  Elf64_Half shnum = elf.e_shnum;
  Elf64_Off shoff = elf.e_shoff;
  Elf64_Half shsz = elf.e_shentsize;

  fseek(fp, shoff, SEEK_SET);
  for(Elf64_Half ns = 0; ns < shnum; ns++){
    Elf64_Shdr now_shent;
    assert(fread(&now_shent, shsz, 1, fp)== 1);
    if(now_shent.sh_type == SHT_SYMTAB){
      Elf64_Shdr symtab = now_shent;
      Elf64_Half nsym = symtab.sh_size / symtab.sh_entsize;
      
      Elf64_Shdr strtab;
      assert(fread(&strtab, shsz, 1, fp) == 1);
      fseek(fp, strtab.sh_offset, SEEK_SET);
      assert(fread(strtab_buf, strtab.sh_size, 1, fp) == 1);

      Elf64_Off symtab_off = now_shent.sh_offset;
      fseek(fp, symtab_off, SEEK_SET);
      for(Elf64_Half i = 0; i < nsym; i++){
        Elf64_Sym symen;
        assert(fread(&symen, symtab.sh_entsize, 1, fp) == 1);
        
        if(ELF64_ST_TYPE(symen.st_info) == STT_FUNC){
          strcpy(funcs[tot_func].name,&(strtab_buf[symen.st_name]));
          funcs[tot_func].staddr = symen.st_value;
          funcs[tot_func].edaddr = symen.st_value + symen.st_size;
          if(symen.st_size == 0) func_start = tot_func;
          tot_func++;
        }
      }
      break;
    }
  }
  fclose(fp);
}

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return optind - 1;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           load ELF file FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Load ELF*/
  load_elf();

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
