#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector for values
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	i = 1;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < 47 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
