#include "main.h"

/**
 * open_file - Open a file with specified flags.
 * @filename: Name of the file to open.
 * @flags: Flags to specify file access mode.
 *
 * Return: File descriptor on success, exits with error on failure.
 */
int open_file(const char *filename, int flags)
{
	int fd;

	fd = open(filename, flags);
	if (fd == -1)
	{
		print_error("Can't open file", filename);
		exit(98);
	}

	return (fd);
}

