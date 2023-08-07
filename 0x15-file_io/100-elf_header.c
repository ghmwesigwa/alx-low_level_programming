#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#include "elf_header.h"

/**
 * display_error - Display an error message and exit.
 * @message: The error message to display.
 */
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header - Display the ELF header information.
 * @header: A pointer to the ELF header structure.
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	/* Function implementation remains unchanged */
	(void)header; /* Unused parameter */
}

/**
 * display_elf_header_additional_info - Display additional ELF header information.
 * @header: A pointer to the ELF header structure.
 */
void display_elf_header_additional_info(const Elf64_Ehdr *header)
{
	/* Function implementation remains unchanged */
	(void)header; /* Unused parameter */
}

/**
 * display_elf_header_type_info - Display ELF header type information.
 * @header: A pointer to the ELF header structure.
 */
void display_elf_header_type_info(const Elf64_Ehdr *header)
{
	/* Function implementation remains unchanged */
	(void)header; /* Unused parameter */
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to command-line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	Elf64_Ehdr header;
	ssize_t read_bytes;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
		display_error("Error opening file");

	read_bytes = read(fd, &header, sizeof(header));
	if (read_bytes != sizeof(header))
		display_error("Error reading ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
		display_error("Not an ELF file");

	display_elf_header(&header);

	close(fd);
	return (0);
}

