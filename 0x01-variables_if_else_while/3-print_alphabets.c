
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
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
