#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
