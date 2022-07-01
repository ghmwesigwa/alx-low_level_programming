#include <stdio.h>

/**
*main - print 01 to 89 with no duplicate digits or combos: no 11, no 10 (01)
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';
	int m = '1';

	for (; n <= '9'; n++) /*print first position of the combo*/
	{
		for (m = n + 1; m <= '9'; m++) /*print second position of the combo*/
		{
			putchar(n);
			putchar(m);
			if (n != '8' || m != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
