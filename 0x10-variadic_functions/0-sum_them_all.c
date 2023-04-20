#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - It returns the sum of all its parameters.
 * @n: number of arguments of the function
 *
 * Return: 0 if n == 0 and sum otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value, sum = 0;
	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		value = va_arg(numbers, int);
		sum = sum + value;
	}
	va_end(numbers);

	return (sum);
}
