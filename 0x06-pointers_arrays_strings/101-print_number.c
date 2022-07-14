#include "main.h"
/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int num;
/*check if number is negative*/
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
/* print number by recursion*/
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
