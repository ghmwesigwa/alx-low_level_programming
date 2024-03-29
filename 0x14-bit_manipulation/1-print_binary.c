#include "main.h"

extern int _putchar(char c);

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary format.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			started = 1;
		}
		else if (started == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}

