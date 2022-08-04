#include "variadic_functions.h"

/**
* print_numbers - prints all arguments passed
* @separator: delimiter
* @n: amount of arguments in list
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	
	if (n > 0)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (i ! <= n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
