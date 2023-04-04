#include "main.h"
#include <string.h>

/**
 * _memcpy - It copies memory area.
 *
 * @dest: the new pointer
 * @src: the old pointer
 * @n: number of bytes
 *
 * Return: memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

