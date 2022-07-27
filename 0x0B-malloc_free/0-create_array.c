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
	char *array;
	unsigned int counter = 0;

	array = malloc(sizeof(char) * size); /* allocate memory */
	if (array == NULL || size == 0) /* validate size input */
		return (NULL);
	while (counter < (int) size) /* set array values to char c */
		array[counter] = c;
counter++;
	return (array);
}
