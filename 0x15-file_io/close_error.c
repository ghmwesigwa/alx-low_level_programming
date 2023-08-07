#include "main.h"

/**
 * close_error - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 */
void close_error(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

