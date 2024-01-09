#include <string.h>
#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: a string
 */

void rev_string(char *s)
{
	int n = strlen(s);
	int i = 0;
	char c;

	while (i <  n / 2)
	{
		c = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = c;
		i++;
	}
}
