#include <stdio.h>
/**
 * main - Entry point
 *
 * Result: Always 0 (Success)
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);
		i++;
	}
	return (0);
}
