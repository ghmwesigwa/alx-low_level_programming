#include "main.h"

/**
* print_number - print an integer, without using long, arrays, or pointers
* @n: number to be printed
*/

void print_number(int n)
{
	unsigned int temp = n;

	if (n < 0)
	{
	temp = -temp;
	_putchar('-');
	}
	if ((temp / 10) > 0)
		print_number(temp / 10);
	_putchar('0' + (temp % 10));
}
