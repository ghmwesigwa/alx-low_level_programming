
#include "main.h"
/**
* puts2 - prints every second character of a string, followed by a new line
* @str: string to print
* Return: void.
*/
void puts2(char *str)
{
	int i = 0, count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}
	for (i = 0; i <= count - 1 ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
