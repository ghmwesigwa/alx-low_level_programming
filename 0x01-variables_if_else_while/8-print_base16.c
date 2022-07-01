#include <stdio.h>

/**
*main - prints hexadecimal base 0123456789abcdef, using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
	char n = '0';
	char m = 'a';

	for ( ; n <= '9'; n++) /*print 0-9*/
	{
		putchar(n);
	}
	for ( ; m <= 'f'; m++) /*print a-f to finish hexbase*/
	{
		putchar(m);
	}

	putchar(10);
	return (0);
}
