#include <stdio.h>

/**
*main - print all combinations of three different digits
*Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';
	int m = '1';
	int p = '2';

	for (; n <= '9'; n++) /*first position*/
	{
		for (m = n + 1; m <= '9'; m++) /*second position*/
		{
			for (p = m + 1; p <= '9'; p++) /*third position*/
			{
				putchar(n);
				putchar(m);
				putchar(p);
				if (n != '7' || m != '8' || p != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
