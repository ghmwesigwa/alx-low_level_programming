#include <stdio.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'z';

	for ( ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
