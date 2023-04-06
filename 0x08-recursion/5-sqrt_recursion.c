#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: an integer number.
 *
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int x = (int)sqrt(n);

	if (n == 0 || n == 1)
		return (n);
	if (n < 0 || n != x * x)
		return (-1);
	return (x);
}
