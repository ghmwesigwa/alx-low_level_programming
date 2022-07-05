#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer value
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if ((n % 10) >= 0)
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	else
	{
		_putchar('0' + (-1 * (n % 10)));
		return ((-1 * (n % 10)));
	}
}
