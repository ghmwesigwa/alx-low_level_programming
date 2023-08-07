#ifndef ELF_HEADER_H
#define ELF_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * struct elf_ident_s - ELF identification header
 * @ei_mag:        Magic number (4 bytes)
 * @ei_class:      Class (1 byte)
 * @ei_data:       Data encoding (1 byte)
 * @ei_version:    File version (1 byte)
 * @ei_osabi:      OS/ABI identification (1 byte)
 * @ei_abiversion: ABI version (1 byte)
 * @ei_pad:        Start of padding bytes (7 bytes)
 */
typedef struct elf_ident_s
{
	uint8_t ei_mag[EI_MAG0 + 3];
	uint8_t ei_class;
	uint8_t ei_data;
	uint8_t ei_version;
	uint8_t ei_osabi;
	uint8_t ei_abiversion;
	uint8_t ei_pad[EI_PAD - (EI_OSABI + 1)];
} elf_ident_t;

/* Function prototypes */
void display_error(const char *message);
void display_elf_header(const Elf64_Ehdr *header);

#endif /* ELF_HEADER_H */

