#include <stdio.h>

/**
*main - print a number pair from 00-99 but no repeats.
*Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';
	int m;
	int p;
	int q;

	for (; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (p = '0'; p <= '9'; p++)
			{

				for (q = '0'; q <= '9'; q++)
				{
					if ((n < p) || (n == p && m < q))
					{
						putchar(n);
						putchar(m);
						putchar(' ');
						putchar(p);
						putchar(q);
					if (!(n == '9' && m == '8'))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
