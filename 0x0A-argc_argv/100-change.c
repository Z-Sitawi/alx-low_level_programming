#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argc: argument count.
 * @argv: array of strings containing the arguments.
 * Return: the minimum number of coins.
 */
int main(int argc, char *argv[])
{
	int i, amount, coins = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	for (i = 0; amount > 0 && i < 5; i++)
	{
		if (amount >= cents[i])
		{
			coins += amount / cents[i];
			amount %= cents[i];
		}
	}
	if (amount != 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
