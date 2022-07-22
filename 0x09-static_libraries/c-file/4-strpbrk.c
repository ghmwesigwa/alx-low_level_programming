#include "main.h"

/**
 * _strpbrk - main function
 * @s: char pointer var
 * @accept: char pointer var
 * Return: returns char
 */
char *_strpbrk(char *s, char *accept)
{
 int i;

	for (;*s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (0);
}
