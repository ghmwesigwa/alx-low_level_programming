#include "main.h"

/**
  * binary_to_uint - converts a string of 1's and 0's to a decimal number
  * @b: string to convert
  * Return: unsigned decimal number
  */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, i;
	unsigned int result = 0;

	if (b == NULL)
		return (result);

	/* find string length */
	while (b[len] != '\0')
		len++;
	len -= 1;

	for (i = 0; b[i]; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (result);

		if (b[i] == '1')
			result += (1 * (1 << len));
		len--;
	}

	return (result);
}
