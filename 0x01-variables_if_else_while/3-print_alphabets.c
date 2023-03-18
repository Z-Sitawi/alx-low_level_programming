#include <stdio.h>

/**
 * main - Print the (small & big) case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;

	for (i = 0; i < 53; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
