#include "main.h"

/**
 * times_table - print multiplication table
 */
void times_table(void)
{
	int row, column, product;

	for (column = 0; column < 10; column++)
	{
		for (row = 0; row < 10; row++)
		{
			product = (row * column);
			if (((row * column) / 10) > 0)
				_putchar('0' + (product / 10));
			else if (row > 0)
				_putchar(' ');
			_putchar('0' + (product % 10));
			if (row < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
