#include "main.h"

/**
 * _strchr - checks for char
 * @s: pointer to first occurrence or NULL
 * @c: character to check
 *
 * Return: the pointer to first occurrence
 */

char *_strchr(char *s, char c)
{
	unsigned int counter;

	for (counter = 0; s[counter] >= '\0' ; counter++)
	{
		if (s[counter] == c)
			return (s + counter);
	}
	return (NULL);
}
