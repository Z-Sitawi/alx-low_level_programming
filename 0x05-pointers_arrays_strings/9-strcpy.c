#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: a pointer to the buffer where to copy.
 * @src: a pointer to the string to copy.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	size_t lenght, i;

	lenght = strlen(src);
	for (i = 0; i <= lenght; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
