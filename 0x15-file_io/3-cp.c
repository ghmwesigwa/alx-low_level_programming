#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * print_error - Prints an error message to stderr.
 * @message: The error message to print.
 * @file: The name of the file associated with the error.
 */
void print_error(const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
}

/**
 * open_file - Opens a file and handles errors.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 *
 * Return: The file descriptor of the opened file, or -1 on failure.
 */
int open_file(const char *filename, int flags)
{
	int fd;

	fd = open(filename, flags);
	if (fd == -1)
	{
		print_error("Can't read from file", filename);
		exit(98);
	}
	return (fd);
}

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[1024];

	fd_from = open_file(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			print_error("Can't write to", file_to);
			exit(99);
		}
	}
	if (r_bytes == -1)
	{
		print_error("Can't read from file", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		print_error("Can't close fd", file_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		print_error("Can't close fd", file_to);
		exit(100);
	}
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to", "");
		exit(97);
	}

	if (strcmp(argv[1], argv[2]) == 0)
	{
		print_error("Can't write to", argv[2]);
		exit(99);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

