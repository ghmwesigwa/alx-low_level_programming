#include "stdio.h"

/**
* _sqrt - find square root of n, starting from the smallest possible, 0
* @a: int
* @b: int
* Return: natural square root, or -1 if not natural root
*/
int _sqrt(int a, int b)
{
	if ((a * a) == b)
	{
		return (a);
	}
	else if ((a * a) > b)
	{
		return (-1);
	}

	return (_sqrt((a + 1), b));
}

/**
* _sqrt_recursion - find natural square root of n
* @n: n
* Return: natural square root, or -1 if not natural root
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt(1, n));
}
