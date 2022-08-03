#include <stdio.h>
#include <stdlib.h>

/**
* main - print hex of main
* @argc: number of arguments
* @argv: array of arguments as strings
* Return: int (0) for success (1) for failure
*/

int main(int argc, char *argv[])
{
	int i;
int size = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < size - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
