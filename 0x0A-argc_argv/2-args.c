<<<<<<< HEAD
#include "main.h"

/**
 * main - print each argument passed to program on a line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
=======
#include "main.h"

/**
* main - print each argument passed to program on a line
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
>>>>>>> 9e2831f0985a0c0f42aaa74afa2f2450cddb60dd
