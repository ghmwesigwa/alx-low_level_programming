
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int alph = 'a';

	for ( ; alph <= 'z' ; alph++)
	{
		if (alph != 'q' && alph != 'e')
			putchar(alph);
	}
	putchar(10);
	return (0);
}
