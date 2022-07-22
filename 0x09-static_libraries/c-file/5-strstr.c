#include "stdio.h"

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	char *p;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack != '\0'; haystack++)
	{
		a = 0;
		p = haystack;
		do {
			a++;
			p++;
			if (needle[a] == '\0')
				return (haystack);
		} while (*p == needle[a]);
	}
	return (0); /* No match */
}
