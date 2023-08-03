#include "main.h"

/**
* print_triangle - print traingle with #'s with given size
* @size: size of triangle to draw
*/

void print_triangle(int size)
{
	int height;
	int width;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (width = 0; width < size; width++)
	{
		for (height = (size - 1); height >= 0; height--)
		{
			if (height <= width)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
