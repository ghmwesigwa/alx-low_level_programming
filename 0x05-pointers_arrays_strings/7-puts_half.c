#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int idx = 0;
	int len = 0;

	while (str[idx] != 0)
	{
		len++;
		idx++;
	}

	if (len  % 2 == 0)
	{
		for (idx = len / 2; idx < len ; idx++)
		{
			_putchar(str[idx]);
		}
	}
	else
	{
		for (idx = (len + 1) / 2; idx < len; idx++)
		{
			_putchar(str[idx]);
		}
	}
	_putchar('\n');
}
