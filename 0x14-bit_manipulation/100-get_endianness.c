#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if the system is little-endian, 0 if it is big-endian.
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *c = (char *)&check;

	return (*c);
}

