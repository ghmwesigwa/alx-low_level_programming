#include "2-main.h"

/**
* print_alphabet_x10 - print lowercase alphabet ten times
* Return: 0
*/

void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	for (counter = 1; counter <= 10; counter++) /* print the alphabet 10 times*/
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++) /* print the alphabet*/
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
