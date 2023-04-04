#include "main.h"
#include <string.h>

/**
 * _strpbrk -  locates the first occurrence in s of any of the bytes in accept
 *
 * @s: first string
 * @accept: second string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
