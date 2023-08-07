#include "main.h"

/**
 * usage_error - Prints a usage error message and exits.
 *
 * Return: Exit status 97.
 */
int usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	return (97);
}

