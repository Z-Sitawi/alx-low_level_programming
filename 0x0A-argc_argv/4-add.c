#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: counts the number of thee arguments
 * @argv: array of strings
 * Return: Always sum
 */
int main(int argc, char *argv[])
{
	int sum = 0, num, i, j;

	/*Check if the program received two arguments*/
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	/*Convert the arguments to integers*/
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error: Input must be positive\n");
			return (1);
		}
		sum = sum + num;
	}

	/*prints the result for the last iteration*/
	printf("%d\n", sum);

	return (sum);
}
