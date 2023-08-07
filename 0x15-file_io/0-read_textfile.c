#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_written;
	int fd;
	ssize_t total_bytes_read = 0;
	ssize_t bytes_read;
	ssize_t bytes_to_print;
	char buffer[1024];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (letters > 0)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read == -1)
			break;

		if (bytes_read > (ssize_t)letters)
			bytes_to_print = letters;
		else
			bytes_to_print = bytes_read;

		bytes_written = write(STDOUT_FILENO, buffer, bytes_to_print);

		if (bytes_written == -1 || bytes_written != bytes_to_print)
			break;

		total_bytes_read += bytes_read;
		letters -= bytes_read;

		if (bytes_read == 0 || letters == 0)
			break;
	}

	close(fd);

	return (total_bytes_read);
}
