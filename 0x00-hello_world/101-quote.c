#include <stdio.h>

/**
 * main - print a quote
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
		putchar('\n');
	return (1);
}
