#include "main.h"
/**
* strlen - returns the length of a string
* @s: string
* Return: length
*/
void rev_string(char *s)
{
	int i,j = 0;
	int len;
	char temp[150];

	while (s[i] != 0)
	{
		i++;
	}
	len = i;
	for (i = len - 1; i >= 0; i--)
	{
		temp[j] = s[i];
		j++;
	}
	for (i = 0; i <= len - 1; i++)
	{
		s[i] = temp[i];
	}
}
