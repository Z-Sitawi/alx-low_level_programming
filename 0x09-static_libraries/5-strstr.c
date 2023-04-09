#include "main.h"
#include <string.h>

/**
 * _strstr - function locates the first occurrence of needle
 * in the string 'haystack'. The function returns a pointer to the beginning
 * of the first occurrence of 'needle' in 'haystack'
 * or a null pointer if 'needle' is not found.
 *
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 *
 * Return: a pointer to the first occurrence of 'needle' in 'haystack'
 * or a null pointer if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

