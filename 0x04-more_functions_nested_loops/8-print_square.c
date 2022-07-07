
#include "main.h"

/**
 * print_square - prints out a square
 * @size: the square length
 * Return: (void)
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++) /* row */
		{
			for (j = 1; j <= size; j++)/* column */
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
