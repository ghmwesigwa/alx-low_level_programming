#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append text and only if file exists
 * @filename: file
 * @text_content: appends this content into file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r_write = 0, fd = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL && fd != -1)
	{
		return (1);
	}
	if (text_content == NULL && fd == -1)
		return (-1);
	if (fd == -1)
	{
		return (-1);
	}
	r_write = write(fd, text_content, strlen(text_content));
	if (r_write == -1)
		return (-1);
	return (1);
}
