#include "main.h"
/**
 * get_endianness - checks if multibyte
 * data is stored as little or big endian
 * Return: first value stored, 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	int n;

	n = 1;
	char *c = (char *)&n;
	return ((int)c[0]);
}
