#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - change all lowercase to uppercase
 * @str: pointer
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int sl = strlen(str), i;

	for (i = 0; i < sl; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
