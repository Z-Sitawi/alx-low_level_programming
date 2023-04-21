#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 *
 * @format: is a list of types of arguments passed to the function
 * @...: A variable number of strings to be printed.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";
	va_list arglist;

	va_start(arglist, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arglist, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arglist, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arglist, double));
					break;
				case 's':
					str = va_arg(arglist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(arglist);
}
