#include "main.h"
/**
 * _isupper - checks if a character is upper class
 *
 * @c: a single character
 *
 * Return: 1 if c is upper and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
