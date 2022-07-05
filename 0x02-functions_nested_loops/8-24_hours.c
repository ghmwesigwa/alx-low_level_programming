#include "main.h"

/**
 * jack_bauer - prints every minute of jack bauer 00:00 to 23:59
 *
 * Return: (void)
 *
 */

void jack_bauer(void)
{
	int hourDigit = 0;
	int minuteDigit = 0;

	for (; hourDigit < 24; hourDigit++)
	{
		for (minuteDigit = 0; minuteDigit < 60; minuteDigit++)
		{
			_putchar('0' + (hourDigit / 10));
			_putchar('0' + (hourDigit % 10));
			_putchar(':');
			_putchar('0' + (minuteDigit / 10));
			_putchar('0' + (minuteDigit % 10));
			_putchar('\n');
		}
	}
}
