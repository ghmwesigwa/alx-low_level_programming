#include "main.h"

/**
 * set_bit - set bit to 1 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
