#include "main.h"

/**
* main - prints product of two numbers
* @argc: number of arguments
* @argv: array of pointers to string arguments
*
* Return: always 0 for success
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
