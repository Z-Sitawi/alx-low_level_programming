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
	unsigned int i = 0, j = 0, sl1 = 0, sl2 = 0;

	while (s1 && s1[sl1])
		sl1++;

	while (s2 && s2[sl2])
		sl2++;

	if (n < sl2)

		s = malloc(sizeof(char) * (sl1 + n + 1));

	else
		s = malloc(sizeof(char) * (sl1 + sl2 + 1));

	if (!s)
		return (NULL);

	while (i < sl1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < sl2 && i < (sl1 + n))

		s[i++] = s2[j++];

	while (n >= sl2 && i < (sl1 + sl2))

		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
