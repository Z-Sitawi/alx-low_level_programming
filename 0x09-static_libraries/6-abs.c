#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @a: integer number
 *
 * Return: the absolute value
 */
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (0);
	}
}
