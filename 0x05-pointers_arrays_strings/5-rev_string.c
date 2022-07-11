#include "main.h"
/**
* strlen - returns the length of a string
* @s: string
* Return: length
*/
void rev_string(char *s)
{
	int i = 0;
	int j = (strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
