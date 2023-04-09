#include "main.h"
#include <string.h>

/**
 * _memset - It fills memory with a constant byte.
 *
 * @s: pointer
 * @b: value
 * @n: bytes
 *
 * Return: memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

