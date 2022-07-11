#include "main.h"
/**
* _strcpy - function that copies the string pointed to by src
* @dest: char pointer
* @src: char pointer
* Return: char.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
i++;
	} while (src[i] != '\0');
	dest[i] = '\0';

	return (dest);
}
