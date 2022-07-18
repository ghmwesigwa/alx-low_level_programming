
#include "main.h"
/**
* _memcpy - copy n bytes of memory from source to destination
* @dest: destination
* @src: source
* @n: number of bytes
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
 if (n > 0)
	{
		int i = 0;

		for (; i < n; i++)
			dest[i] = src[i];
	}

	return (dest);
}
