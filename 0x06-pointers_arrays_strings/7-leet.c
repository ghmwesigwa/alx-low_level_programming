#include "stdio.h"

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s)
{

	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	int leetCount, stringCount;
	
	/*  scan through string */
	for (stringCount = 0; s[stringCount] != '\0'; stringCount++)
	{
	    /* check whether leetLetter is found */
		for (leetCount = 0; leetLetters[leetCount] != '\0'; leetCount++)
		{
			if (s[stringCount] == leetLetters[leetCount])
				s[stringCount] = leetNums[leetCount];
		}
	}

	return (s);
}
