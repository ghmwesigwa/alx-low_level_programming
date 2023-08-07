#include "main.h"

/**
 * read_error - Handle read error for a file.
 * @fd: File descriptor.
 * @filename: Name of the file being read.
 */
void read_error(int fd, const char *filename)
{
	print_error("Can't read from file", filename);
	close_error(fd);
}

