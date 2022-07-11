#include "main.h"
/**
* _strcpy - function that copies the string pointed to by src
* @dest: char pointer
* @src: char pointer
* Return: char.
*/
char *_strcpy(char *dest, char *src)
{
	do {
		*dest = *src;
		src++;
		dest++;
	} while (*src);
	/* dest[i] = '\0'; */

	return (dest);
}
