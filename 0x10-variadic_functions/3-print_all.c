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
	const char *p = format, *separator = ", ";
	va_list arg_list;
	char c_arg;
	int i_arg;
	float f_arg;
	char *s_arg;

	va_start(arg_list, format);
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				c_arg = va_arg(arg_list, int);
				printf("%c", c_arg);
				break;
			case 'i':
				i_arg = va_arg(arg_list, int);
				printf("%d", i_arg);
				break;
			case 'f':
				f_arg = va_arg(arg_list, double);
				printf("%f", f_arg);
				break;
			case 's':
				s_arg = va_arg(arg_list, char *);
				if (s_arg == NULL)
					printf("(nil)");
				printf("%s", s_arg);
				break;
			default:
				{
				}
		}
		p++;
		if (separator != NULL && (*p == 's' || *p == 'f' || *p == 'i' || *p == 'c'))
			printf("%s", separator);
	}
	va_end(arg_list);
	printf("\n");
}
