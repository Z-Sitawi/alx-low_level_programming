#include <stdio.h>
/**
 * print_alphabet - print low case alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
/**
 * main - execute the function print_alphabet()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();

	return (0);
}
