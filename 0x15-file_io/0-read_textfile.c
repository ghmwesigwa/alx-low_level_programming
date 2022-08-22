#include "main.h"

/**
 * read_textfile - read in a file and print to stdout
 * @filename: the content to print
 * @letters: number of chars to print
 * Return: 0 if error, else bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_wrote;
	char *buffer;
  
  (filename == NULL)?return (0):null;

	fd = open(filename, O_RDONLY);
  (fd == -1)?return (0):null;

	buffer = malloc(sizeof(char) * letters);
	(buffer == NULL)?return (0):null;
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_read);

}
