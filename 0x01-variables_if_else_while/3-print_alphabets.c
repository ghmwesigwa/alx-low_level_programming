
#include <stdio.h>

/**
 * main - prints lower and upper case alphabets
 *
 * Return: 0 for success
 */
int main(void)
{
	char n = 'a';
	char m = 'A';

	for ( ; n <= 'z'; n++)
		putchar(n);
	for ( ; m <= 'Z'; m++)
		putchar(m);
	putchar(10);
	return (0);
}
