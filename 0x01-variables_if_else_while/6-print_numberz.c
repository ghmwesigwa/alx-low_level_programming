#include <stdio.h>

/**
 *main - print 0123456789 using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	for ( ; n < '10' ; n++)
	{
		putchar(n);
	}
	putchar(10);
	return (0);
}
