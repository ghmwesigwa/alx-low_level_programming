
#include "main.h"

 /**
 * main - print name of program
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
