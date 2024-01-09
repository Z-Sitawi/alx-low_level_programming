#include <string.h>
#include "main.h"
/**
 * print_rev - reverse a string
 *
 * @s: a string
 */

void print_rev(char *s)
{
	int n = strlen(s);
	int i;
	char c;

	for (i = n - 1; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');
}
