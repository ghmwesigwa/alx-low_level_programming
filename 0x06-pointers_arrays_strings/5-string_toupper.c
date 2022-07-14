#include "main.h"
/**
* string_toupper - converts string to uppercase
* @s: input string to be converted
* Return: string after conversion to upper
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] > 'a' && s[i] < 'z')
			s[i] = s[i] - 'a' + 'A';
	return (s);
}
