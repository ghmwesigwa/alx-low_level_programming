#include "main.h"
/**
* _strchr - locate 1st occurrence of char in string and returns pointer there
* @s: string to search
* @c: target characer
* Return: pointer to that character
*/

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	} while (*s != '\0');
	return (s + 1);
}
