#include "main.h"

/**
* _isalpha - check if character is alphabetic
* @c : integer value
* Return: 1 if lower or uppercase, otherwise 0
*
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
