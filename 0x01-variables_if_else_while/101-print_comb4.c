#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			for (l = 48; l < 58; l++)
			{
				if (m > n && l > m)
				{
					putchar(n);
					putchar(m);
					putchar(l);
				}
				if (m > n && l > m && n != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
