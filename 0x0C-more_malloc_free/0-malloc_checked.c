#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: size to malloc
* Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
