#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

//extern uint8_t ramdisk_start;
#define MAX_SIZE 655360
static uint8_t filebuf[MAX_SIZE];
static uintptr_t loader(PCB *pcb, const char *filename) {
  //printf("[ENTRY] %s\n",__func__);
  int fd = fs_open(filename, 0, 0);
  assert(fs_read(fd,filebuf,MAX_SIZE) <= MAX_SIZE);
  fs_close(fd);
  Elf_Ehdr *elf = (Elf_Ehdr *)filebuf;
  //printf("elf = %p\n",elf);
  assert(*(uint32_t *)elf->e_ident == 0x464c457f);
  Elf64_Half phnum = elf->e_phnum;
  Elf64_Off phoff = elf->e_phoff;
  Elf64_Half phsz = elf->e_phentsize;
  for(Elf64_Half np = 0; np < phnum; np++){
    Elf_Phdr *now_ph = (Elf_Phdr *)(phoff + (uintptr_t)elf);
    //printf("ptype = %d\n",now_ph->p_type);
    if(now_ph->p_type == PT_LOAD){
      assert(now_ph->p_type == PT_LOAD);
      //printf("find seg to load\n");
      Elf64_Off offset = now_ph->p_offset;
    //  printf("offset = %d\n",offset);
      Elf64_Addr vaddr = now_ph->p_vaddr;
      //Elf64_Xword filesz = now_ph->p_filesz;//not aligned
      //Elf64_Xword memsz = now_ph->p_memsz;
      Elf64_Xword filesz = now_ph->p_filesz;//not aligned
      Elf64_Xword memsz = now_ph->p_memsz;
      assert(filesz <= memsz);
    //  printf("&now_ph->p_filesz = %p\n", phoff + (uintptr_t)elf);
    //  printf("filesz = %p\n", filesz);
      memcpy((void *)vaddr, filebuf + offset, filesz);
      memset((void *)(vaddr + filesz), 0, memsz - filesz);
    }
    phoff += phsz;
  }
  //printf("[LEAVE] %s",__func__);
  //TODO();
  return elf->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

