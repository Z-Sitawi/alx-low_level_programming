#include "main.h"
#include <string.h>
/**
 * _strlen_recursion -  returns the length of a string.
 * @s: a string.
 *
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (strlen(s));
}
