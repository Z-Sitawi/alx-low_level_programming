#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - It prints numbers, followed by a new line.
 *
 * @n:  the number of integers passed to the function.
 * @separator: the string to be printed between numbers.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int value;

	va_start(numbers, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			value = va_arg(numbers, int);
			printf("%d%s", value, separator);
		}

		printf("\n");
	}
}
