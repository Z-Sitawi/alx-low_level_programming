#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: is single character in ASCII code
 * Return: Always return 1 (Success) if int c is lowercase return  0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
