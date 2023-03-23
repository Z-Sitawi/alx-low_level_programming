#include <stdio.h>
/**
 * main - print n from 1 to 10 + fizz and buzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");

		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	putchar('\n');

	return (0);
}
