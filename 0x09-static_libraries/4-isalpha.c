#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: is a single character in ASCII code
 *
 * Return: Always return 1 (Success) if int c is alphabitic return 0 for other
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
