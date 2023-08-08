#ifndef _CUSTOM_ELF_H_
#define _CUSTOM_ELF_H_

#include <stdint.h>

/* ELF header */
#define EI_NIDENT 16

/* Define OS/ABI constants */
#define ELFOSABI_SYSV   0   /* UNIX System V ABI */
#define ELFOSABI_HPUX   1   /* HP-UX */
#define ELFOSABI_NETBSD 2   /* NetBSD */

typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

/* Values for e_type */
#define ET_NONE   0
#define ET_REL    1
#define ET_EXEC   2
#define ET_DYN    3
#define ET_CORE   4

/* Values for e_machine */
#define EM_NONE        0
#define EM_M32         1
#define EM_SPARC       2
#define EM_386         3
#define EM_68K         4
#define EM_88K         5
#define EM_860         7
#define EM_MIPS        8

/* Values for e_ident[] */
#define EI_OSABI    7
#define EI_ABIVERSION    8


/* Values for e_version */
#define EV_NONE    0
#define EV_CURRENT 1

/* Values for e_ident[] */
#define ELFMAG0    0x7F
#define ELFMAG1    'E'
#define ELFMAG2    'L'
#define ELFMAG3    'F'
#define EI_CLASS   4
#define EI_DATA    5

#define ELFMAG     "\177ELF"
#define SELFMAG    4

#define ELFCLASSNONE    0
#define ELFCLASS32      1
#define ELFCLASS64      2

#define ELFDATANONE     0
#define ELFDATA2LSB     1
#define ELFDATA2MSB     2

#define ET_CORE   4

/* Values for OS/ABI */
#define ELFOSABI_SYSV     0
#define ELFOSABI_HPUX     1
#define ELFOSABI_NETBSD   2

int read_elf_header(const char *filename, Elf64_Ehdr *header);

/* Function Prototypes for printing */
void print_magic(const unsigned char *e_ident);
void print_class(const unsigned char *e_ident);
void print_data(const unsigned char *e_ident);
void print_osabi(unsigned char osabi);
void print_abiversion(unsigned char abiversion);
void print_type(uint16_t type);
void print_version(uint32_t version);
void print_flags(uint32_t flags);
void print_elf_header(const Elf64_Ehdr *header);

#endif /* _CUSTOM_ELF_H_ */

