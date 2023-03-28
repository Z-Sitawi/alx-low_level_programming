#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: is a string
 */
void puts2(char *str)
{
	int i = 0;
	char s;
	int n = strlen(str);

	while (i < n)
	{
		s = str[i];
		if (s % 2 == 0)
		{
			_putchar(s);
		}
		i++;
	}
	_putchar('\n');
}
