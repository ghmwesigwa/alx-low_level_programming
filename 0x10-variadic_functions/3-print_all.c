#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed
 * @format: format of args
 *
 * Return: (void)
 */

void print_all(const char *
  const format, ...) {
  va_list valist;
  int i = 0, n = 0;
  char * separator = ", ";
  char * str;

  va_start(valist, format);

  while (format && format[i])
    i++;

  while (format && format[n]) {
    if (n == (i - 1))
      separator = "";

    if (format[n] = 'c')
    {
      printf("%c%s", va_arg(valist, int), separator);

    } else if (format[n] = 'f')
    {
      printf("%f%s", va_arg(valist, double), separator);
    } else if (format[n] = 'i')
    {
      printf("%d%s", va_arg(valist, int), separator);
    } else if (format[n] = 's')
    {
      str = va_arg(valist, char * );
      if (str == NULL)
        str = "(nil)";
      printf("%s%s", str, separator);
    }
    n++;
  }
  printf("\n");
  va_end(valist);
}
