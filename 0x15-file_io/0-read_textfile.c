#include "main.h"

/**
 * read_textfile - read in a file and print to stdout
 * @filename: the content to print
 * @letters: number of chars to print
 * Return: 0 if error, else bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, print_read, print_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	
	print_read = read(fd, buffer, letters);
	if (print_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	print_write = write(STDOUT_FILENO, buffer, print_read);
	if (print_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (print_read);

}
	close(fd);
	return (print_read);

}
