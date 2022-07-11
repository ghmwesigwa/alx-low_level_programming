#include "main.h"
/**
* more_numbers - prints sequence from 0 to 14 10 times
* Return: (void)
*/

void more_numbers(void)
{
int i;
int j = 0;

while (j < 10)
{
for (i = 0; i <= 14; i++)
{
if ((i / 10) > 0)
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
}
j++;
_putchar('\n');
}
}
