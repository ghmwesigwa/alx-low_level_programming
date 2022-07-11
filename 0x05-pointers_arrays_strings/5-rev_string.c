#include "main.h"
/**
* rev_string - reverses a string
* @s: string
* Return: void
*/
void rev_string(char *s)
{
	int i, j = 0;
	int len;
	char temp[650];

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
