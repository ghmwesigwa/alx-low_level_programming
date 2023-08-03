#include "main.h"
/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int j, temp, i = n - 1;

	for (j = 0; j < n / 2; j++, i--)
		temp = a[j], a[j] = a[i], a[i] = temp;
}
