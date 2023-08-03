#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number.
 *
 * Return: The converted number, or 0 if there is an invalid character in b
 *         or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL)
        return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0' || b[i] == '1')
        {
            result = result << 1; // Left shift the current result to make space for the next bit
            result += (b[i] - '0'); // Add the binary digit to the result
        }
        else
        {
            return (0); // Return 0 if there is an invalid character in the string
        }
    }

    return (result);
}


