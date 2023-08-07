#include "main.h"

/**
 * copy_file - Copy the content from one file to another.
 * @file_from: Source file.
 * @file_to: Destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	fd_from = open_file(file_from, O_RDONLY);
	fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC);

	while ((r = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			write_error(fd_to, file_to);
		}
	}

	if (r == -1)
	{
		read_error(fd_from, file_from);
	}

	close_error(fd_from);
	close_error(fd_to);
}

