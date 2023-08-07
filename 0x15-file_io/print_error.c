#include "main.h"

/**
 * print_error - Prints an error message to stderr.
 * @message: The error message.
 * @file: The filename associated with the error.
 */
void print_error(const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
}

