#include "main.h"
/**
 * print_sign - prints the sign of a numbe
 *
 * @n: is an int number
 *
 * Return: return 1 if n is + & return (0) if n is zero & return "-1" if n is -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
