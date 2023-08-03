#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there is an invalid character or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (; *b != '\0'; b++)
    {
        if (*b == '0')
        {
            result <<= 1; // Shift left to make space for next bit
        }
        else if (*b == '1')
        {
            result = (result << 1) | 1; // Shift left and set the rightmost bit to 1
        }
        else
        {
            return 0; // Return 0 if an invalid character is encountered
        }
    }

    return result;
}

