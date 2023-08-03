#include "main.h"
/**
* create_array - create array of chars and initialize with a specific char
* @size: size of array
* @c: fill array values with this char
*
* Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0) /* validate size input */
		return (NULL);
	for (i = 0; i < size; i++) /* set array values to char c */
		arr[i] = c;
	return (arr);
}
