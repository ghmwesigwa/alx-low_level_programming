#include "variadic_functions.h"

/**
 * print_all - prints all args passed
 * @format: format of args
 *
 * Return: (void)
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *str;
	int i = 0;

	va_start(valist, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char*);
			if (str == NULL)
			{
				printf("%p", str);
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n"), va_end(valist);
}
