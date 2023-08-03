/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to check the bit in.
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

