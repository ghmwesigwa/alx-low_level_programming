#include "main.h"

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{

	int sum_x = 0;
	int sum_y = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		sum_x += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum_y += a[i];
	}

	printf("%d, %d\n", sum_x, sum_y);

}
