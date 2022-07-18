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
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			s[i] = b;
	}

	return (s);
}
