#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - It prints numbers, followed by a new line.
 *
 * @n: is the number of strings passed to the function
 * @separator: is the string to be printed between the strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *value;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(strings, char *);
		if (value == NULL)
		{
			printf("(nil)");
		}

		printf("%s", value);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
