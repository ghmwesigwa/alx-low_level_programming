
#include "main.h"
/**
* puts2 - prints every second character of a string, followed by a new line
* @str: string to print
* Return: void.
*/
void puts2(char *str)
{
	int i = 0;
	int count = 0;

	do
	{
		count++;
		i++;
	} while ((str[i] != 0));
	for (i = 0; i <= count - 1 ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
