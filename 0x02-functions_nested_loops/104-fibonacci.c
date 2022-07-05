#include <stdio.h>
/**
 * main - print first 98 Fibonacci numbers without using long, malloc,
 * pointers, array/tables, or structures
 * Return: 0
 */
int main(void)
{
	unsigned long int a_head = 0, a_tail = 1, b_head = 0, b_tail = 2;
	unsigned long int overflow, sum, sum_head;
	int i;

	printf("%lu, %lu, ", a_tail, b_tail);
	for (i = 2; i < 98; i++)
	{
		if (a_tail + b_tail > 1000000000 || b_head > 0 || a_head > 0)
		{
			overflow = (a_tail + b_tail) / 1000000000;
			sum = (a_tail + b_tail) % 1000000000;
			
			sum_head = (a_head + b_head) + overflow;
			
			a_head = b_head;
			a_tail = b_tail;
			b_head = sum_head;
			b_tail = sum;
			printf("%lu%010lu", b_head, b_tail);
		}
		else
		{
			sum = a_tail + b_tail;
			a_tail = b_tail, b_tail = sum;
			printf("%lu", b_tail);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
