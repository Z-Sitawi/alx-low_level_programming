#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 * or 0 if there is one or more chars in the string b
 * that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec += (b[i] - '0') * pow(2, strlen(b) - i - 1);
	}

	return (dec);
}
