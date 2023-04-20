#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 *
 * @n: is the number of strings passed to the function
 * @separator: is the string to be printed between the strings
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *	If one of the strings if NULL, (nil) is printed instead.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *value;

	va_start(strings, n);

	/* Check for negative or zero n */
	if (n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		value = va_arg(strings, char *);

		if (value == NULL)
			printf("(nil)");

		else
			printf("%s", value);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
