#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i;
  unsigned int size;

	if (str == NULL)
		return (NULL);
  i = 0;
	while (str[i])
	{
		size++;
    i++;
	}
	i = 0;
	array = malloc(sizeof(char) * (size + 1));
	if (array == NULL || size == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		array[i] = str[i];
	array[size - 1] = '\0';
	return (array);
}
