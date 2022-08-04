#include "variadic_functions.h"

/**
* return sum when given unknown amount
* of arguments
* @n: number of args
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	va_start(valist, n);
	
	/* iterate through list, update sum */
	
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
