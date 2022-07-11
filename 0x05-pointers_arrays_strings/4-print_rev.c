#include "main.h"
/**
* print_rev - prints a string in reverse followed by a new line character
* @s: string to reverse
*/

void print_rev(char *s)
{
	int length = 0;
	int i = length;
	char *p = s;
/* get the length of the string */
	while (*p != '\0')
	{
		length++;
		p++;
	}
	i = length;
	/* print string reversed */
	for (i = length - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
