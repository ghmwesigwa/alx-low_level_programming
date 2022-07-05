#include "main.h"

/**
* print_times_table - print multiplication table up to n
* @n: integer argument
*/
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				if (product > 99)
				{
					putchar(',');
					putchar(' ');
					putchar((product / 100) + '0');
					putchar(((product / 10) % 10) + '0');
					putchar((product % 10) + '0');
				}
				else if (z > 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(((product / 10) % 10) + '0');
					putchar((product % 10) + '0');
				}
				else
				{
					if (column != 0)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					putchar(product + '0');
				}
			}
			putchar('\n');
		}
	}
}
