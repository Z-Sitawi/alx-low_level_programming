#include <stdio.h>
/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char str[] = "_putchar";

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	putchar('\n');
	return (0);
}
