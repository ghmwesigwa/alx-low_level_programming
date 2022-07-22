#include <main.h>

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	/* validate input */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* check all arguments to add numbers */
	while (i < argc)
	{
		if (_isdigit(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * _isdigit - check if character is digit [0-9]
 * @c : integer value
 * Return: 1 if c is digit [0-9] 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
