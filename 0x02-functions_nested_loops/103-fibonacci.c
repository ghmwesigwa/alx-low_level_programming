#include <stdio.h>
/**
* main - print sum of even Fionacci sequence up to 4,000,000
* followed by a new line character
* Return: 0
*/
int main(void)
{
	int a = 1, b = 1, sum = 0;
	int sum_of_evens = 0;

	do {
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			sum_of_evens += sum;
	} while (sum < 4000000);
	printf("%d\n", sum_of_evens);
	return (0);
}
