#include <stdio.h>

/**
 * main -  prints 0123456789abcdf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
		putchar('\n');

	return (0);
}
