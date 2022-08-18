#include "main.h"
/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	return ((index > max_bits) ? -1 : (int)(n >> index) & 1);
}
