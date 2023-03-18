#include <stdio.h>

/**
 * main - Print the small case alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[25] = "abcdfghijklmnoprstuvwxyz\n";
	int i;

	for (i = 0; i < 25; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
