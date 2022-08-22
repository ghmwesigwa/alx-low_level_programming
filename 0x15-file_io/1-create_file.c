#include "main.h"
/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to give to new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, print_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		/* create with permissions if file doesn't exist, else truncate */
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	print_write = write(fd, text_content, strlen(text_content));
	if (print_write == -1)
		return (-1);
	close(fd)
	return (1);
}
