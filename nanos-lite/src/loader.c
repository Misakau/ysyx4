#include <proc.h>
#include <elf.h>

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

extern uint8_t ramdisk_start;

static uintptr_t loader(PCB *pcb, const char *filename) {
  //printf("[ENTRY] %s\n",__func__);
  Elf_Ehdr *elf = (Elf_Ehdr *)(&ramdisk_start);
  printf("elf = %p\n",elf);
  assert(*(uint32_t *)elf->e_ident == 0x464c457f);
  Elf64_Half phnum = elf->e_phnum;
  Elf64_Off phoff = elf->e_phoff;
  Elf64_Half phsz = elf->e_phentsize;
  for(Elf64_Half np = 0; np < phnum; np++){
    Elf_Phdr *now_ph = (Elf_Phdr *)(phoff + (uintptr_t)elf);
    if(now_ph->p_type == PT_LOAD){
      //printf("find seg to load\n");
      Elf64_Off offset = now_ph->p_offset;
      Elf64_Addr vaddr = now_ph->p_vaddr;
      Elf64_Xword filesz = now_ph->p_filesz;
      Elf64_Xword memsz = now_ph->p_memsz;
      printf("&now_ph->p_filesz = %p\n", phoff + (uintptr_t)elf);
      printf("filesz = %p\n", filesz);
      ramdisk_read((void *)vaddr, offset, filesz);
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

