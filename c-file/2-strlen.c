#include "main.h"

/**
* _strlen - prints out the length of the specified string
* @s: string which length is to be calculated
*
* Return: the length of the string (int)
*/

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}
