#include <stdio.h>

/**
 * main - Print the small case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
