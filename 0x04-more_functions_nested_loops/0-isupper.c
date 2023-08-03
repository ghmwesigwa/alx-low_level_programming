#include "main.h"

/**
* _isupper - check if character is upper case
* @c : integer value
* Return: 1 if c is upper case 0 otherwise
*
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
