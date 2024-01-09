#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: a string
 */
void puts_half(char *str)
{
	size_t n, i;

	n = strlen(str) / 2;

	if (strlen(str) / 2 != 0)
	{
		n = (strlen(str) - 1) / 2;
		for (i = n; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
