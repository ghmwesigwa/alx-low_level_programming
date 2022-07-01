#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	for ( ; lower <= 'z'; lower++)
		putchar(lower);
	for ( ; upper <= 'Z'; upper++)
		putchar(upper);
	putchar(10);
	return (0);
}
