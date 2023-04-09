#include "main.h"
#include <string.h>

/**
 * _memcpy - It copies memory area.
 *
 * @dest: a pointer to the destination memory area
 * @src: a pointer to the source memory area
 * @n: number of bytes
 *
 * Return: memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

