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

	for (height = 1; height < size; height++)
	{
		for (width = (size - 1); width >= 0; width--)
		{
			if (width <= height){
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
