#include "main.h"
/**
* cap_string - capitalize first letter of each word
* @s: string to manipulate
* Return: string
*/
char *cap_string(char *s)
{
	int i;
	
	/* check first index for upper-case */
	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		/* if lowercase and prior char is separator, capitalize*/
		if ((s[i] >= 97 && s[i] <= 122)
		 && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
