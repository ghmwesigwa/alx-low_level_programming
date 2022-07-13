#include "main.h"

/**
 * _strcat - concatenates string to other string
 * @dest: destination string
 * @src: source string
 *Return: destination string concatenated
 */
char * _strcat (char * dest, char * src)
{
  int j = 0, i;
  
  for (i = 0; dest[i] != '\0';)
  {
    i++;
  }
  while (src[j] != '\0')
  {
    dest[i] = src[j];
    j++;
    i++;
  }
  dest[i] = '\0';
  return (dest);
}
