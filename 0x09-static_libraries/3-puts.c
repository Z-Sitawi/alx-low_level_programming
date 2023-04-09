#include <stdlib.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *
 * @str: a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
