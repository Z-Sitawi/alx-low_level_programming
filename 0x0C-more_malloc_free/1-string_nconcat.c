#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: secound string
 * @n: number of byets from s2 to be concatenated into s1.
 * 
 * Return: pointer to the concatenated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int sl1 = 0, sl2 = 0, i;

	if (s1 != NULL)
	{
		while (s1[sl1] != '\0')
			sl1++;
	}

	if (s2 != NULL)
	{
		while (s2[sl2] != '\0')
			sl2++;
	}

	if (n >= sl2)
	{
		n = sl2;
	}

	s = malloc(sizeof(char) * (sl1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < sl1; i++)
	{
		s[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		s[sl1 + i] = s2[i];
	}

	s[sl1 + n] = '\0';

	return (s);
}







