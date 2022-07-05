<<<<<<< HEAD
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
=======
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
>>>>>>> 488cd1931b2912f5514d0ed2d14a78711719e0fb
