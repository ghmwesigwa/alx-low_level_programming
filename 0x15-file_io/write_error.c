#include "main.h"

/**
 * write_error - Handle write error for a file.
 * @fd: File descriptor.
 * @filename: Name of the file being written.
 */
void write_error(int fd, const char *filename)
{
	print_error("Can't write to", filename);
	close_error(fd);
}

