#include <main.h>
/**
 * _memset - main function
 * @s: char pointer var
 * @b: char var
 * @n: int var
 * Return: char return
 *
char *_memset(char *s, char b, unsigned int n)
{

	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
