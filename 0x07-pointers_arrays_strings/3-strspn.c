#include "main.h"
/**
* _strspn - return length of string that matches values
* @s: string to search
* @accept: target match
* Return: number of bytes matched
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int matches = 0;

	for (i =0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (matches);
		}
	}
	return (matches);

}
