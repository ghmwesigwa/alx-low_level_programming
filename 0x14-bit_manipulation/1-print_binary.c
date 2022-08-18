#include "main.h"
/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int i, flag;

	if (n == 0)
		_putchar('0');
	for (flag = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		flag = 1;
		if (flag == 1)
		{
			if ((n >> i) & 1)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
	}
}
