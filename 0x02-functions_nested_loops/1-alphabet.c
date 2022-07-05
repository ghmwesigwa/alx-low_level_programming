#include "1-main.c"

/**
* print_alphabet - prints lowercase alphabet
* Return: 0
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
