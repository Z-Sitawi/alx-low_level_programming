#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, sl1 = strlen(s1), sl2 = strlen(s2);
        int size = sl1 + sl2 + 1;
        char *s = (char *)malloc(size * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (s == NULL)
		return (NULL);

	for (i = 0; i < sl1; i++)
		s[i] = s1[i];

	for (i = 0; i < sl2; i++)
		s[sl1 + i] = s2[i];
	s[sl1 + sl2] = '\0';

	return (s);
}
