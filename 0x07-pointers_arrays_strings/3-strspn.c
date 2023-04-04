#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: intial substring
 * @accept: second string
 *
 * Return: the length of s that consists entirely of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
