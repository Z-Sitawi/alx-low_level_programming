#include <stdio.h>

/**
 * main - Print the small case alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[27] = "\nabcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 27; i > 0; i--)
	{
		putchar(alpha[i]);
	}
		putchar('\n');
	return (0);
}
