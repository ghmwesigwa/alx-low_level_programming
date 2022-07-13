#include "main.h"

/**
* _strcat - concatenates string to other string
* @dest: destination string
* @src: source string
*Return: destination string concatenated
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	do {
		dest[i] = src[j];
		i++;
		j++;
	} while (src[j] != '\0');
	dest[i] = '\0';

	return (dest);
}
