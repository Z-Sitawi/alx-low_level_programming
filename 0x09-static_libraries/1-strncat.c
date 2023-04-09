#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: bytes
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
