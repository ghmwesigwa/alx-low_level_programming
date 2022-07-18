include "main.h"
/**
 * _memset - main function
 * @s: char pointer var
 * @b: char var
 * @n: int var
 * Return: char
 */
char * _memset(char * s, char b, unsigned int n)
{
  if (n > 0)
  {
    unsigned int i = 0;
    while (i < n)
    {
      s[i] = b;
      i++;
    }

  }
  return (s);
}
