#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a new string which is a duplicate
 * of the string str
 * @str: a sitring
 *
 * Return: A pointer to the duplicated string( (Success).
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *newstr;
	int i, len;

	if (str == NULL)
	return (NULL);

	len = strlen(str);
	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		*(newstr + i) = *(str + i);
	}

	return (newstr);
}
