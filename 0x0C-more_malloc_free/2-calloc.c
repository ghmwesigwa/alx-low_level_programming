#include "main.h"
/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 *
 * Return: pointer to calloc'd string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	i = 0;
  while (i < (nmemb * size))
  {
		arr[i] = 0;
     i++;
   }

	return (arr);
}
