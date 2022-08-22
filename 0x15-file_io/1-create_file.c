#include "main.h"
/**
 * create_file - create a file and add text in
 * @filename: name of the file
 * @text_content: content to add in the file
 * Return: 1 if success, -1 error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int print_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	print_write = write(fd, text_content, strlen(text_content));
	if (print_write == -1 || print_write != strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
