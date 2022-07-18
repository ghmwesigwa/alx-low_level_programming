#include <main.h>
/**
 * _memset - main function
 * @s: char pointer var
 * @b: char var
 * @n: int var
 * Return: char return
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n; /* accept only positive sizes */

	if (size > 0)
	{
	 int i = 0;
	 while (i < size)
	 {
	 s[i] = b;
	 i++;
	 }
		
	}
	return (s);
}
