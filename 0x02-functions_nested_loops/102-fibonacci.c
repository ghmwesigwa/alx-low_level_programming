#include "main.h"
#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: <0) for success <1> for failure
 *
 */
int main(void)
{
	int i;
	long a = 1;
	long b = 2;

	for (i = 1; i <= 50/2; i++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}

	printf("\n");

	return (0);
}
