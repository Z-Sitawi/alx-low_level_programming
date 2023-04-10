#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: counts the number of thee arguments
 * @argv: array of strings
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	/*Check if the program received two arguments*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/*Convert the arguments to integers*/
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	/*Multiply the two numbers and print the result*/
	mul = n1 * n2;
	printf("%d\n", mul);

	return (0);
}
