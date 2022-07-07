#include "stdio.h"

/**
* print_diagonal - prints out a diagonal line
* @n: the line length
* Return: (void)
*
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++) /* sketch the slash */
		{
			for (j = 1; j < i; j++){
			 putchar(' ');
			} /* space */

			putchar('\\');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
