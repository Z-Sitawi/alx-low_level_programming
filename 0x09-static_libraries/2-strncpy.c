#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: input value
 * @src: input value
 * @n: bytes
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
