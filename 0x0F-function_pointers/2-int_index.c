#include "function_pointers.h"

/**
 * int_index - search for integer in array via function pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing function that we need to execute
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	unsigned long int i;
	int check = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
			return (i);
	}
	return (-1);
}
