#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "custom_elf.h"


/**
 * read_elf_header - Read the ELF header from a file.
 * @filename: The name of the ELF file to read.
 * @header: Pointer to the Elf64_Ehdr structure to store the header.
 * Return: 0 on success, -1 on failure.
 */
int read_elf_header(const char *filename, Elf64_Ehdr *header) {
    int fd;
    ssize_t num_read;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return -1;
    }
    num_read = read(fd, header, sizeof(Elf64_Ehdr));
    if (num_read != sizeof(Elf64_Ehdr)) {
        perror("Error reading ELF header");
        close(fd);
        return -1;
    }

    close(fd);
    return 0;
}


/**
 * print_magic - Print the ELF magic numbers.
 * @e_ident: Array containing ELF identification.
 */
void print_magic(const unsigned char *e_ident)
{
    int i;

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%2.2x%s", e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - Print the ELF class.
 * @e_ident: Array containing ELF identification.
 */
void print_class(const unsigned char *e_ident)
{
    printf("Class:                             ");
    switch (e_ident[EI_CLASS])
    {
        case ELFCLASSNONE:
            printf("None\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
            break;
    }
}

/**
 * print_data - Print the ELF data encoding.
 * @e_ident: Array containing ELF identification.
 */
void print_data(const unsigned char *e_ident)
{
    printf("Data:                              ");
    switch (e_ident[EI_DATA])
    {
        case ELFDATANONE:
            printf("None\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_DATA]);
            break;
    }
}

/**
 * print_version - Print the ELF version.
 * @e_version: ELF version value.
 */
void print_version(uint32_t e_version)
{
    printf("  Version:                           %u (current)\n", e_version);
}

/**
 * print_osabi - Print the ELF OS/ABI.
 * @osabi: ELF OS/ABI value.
 */
void print_osabi(unsigned char osabi)
{
    printf("  OS/ABI:                            ");
    switch (osabi)
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        default:
            printf("<unknown: %u>\n", osabi);
            break;
    }
}

/**
 * print_abiversion - Print the ELF ABI version.
 * @abiversion: ELF ABI version value.
 */
void print_abiversion(unsigned char abiversion)
{
    printf("  ABI Version:                       %u\n", abiversion);
}

/**
 * print_type - Print the ELF type.
 * @e_type: ELF type value.
 */
void print_type(uint16_t e_type)
{
    printf("  Type:                              ");
    switch (e_type)
    {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %x>\n", e_type);
            break;
    }
}

/**
 * print_elf_header - Print the main ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(const Elf64_Ehdr *header)
{
    print_magic(header->e_ident);
    print_class(header->e_ident);
    print_data(header->e_ident);
    print_version(header->e_version);
    print_osabi(header->e_ident[EI_OSABI]);
    print_abiversion(header->e_ident[EI_ABIVERSION]);
    print_type(header->e_type);

    /* Add more print functions for other fields. */

    printf("Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Unable to open file '%s'\n", argv[1]);
        return (EXIT_FAILURE);
    }

    if (read_elf_header(argv[1], &header) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file - '%s'\n", argv[1]);
        close(fd);
        return (EXIT_FAILURE);
    }

    print_elf_header(&header);
    close(fd);
    return (EXIT_SUCCESS);
}

