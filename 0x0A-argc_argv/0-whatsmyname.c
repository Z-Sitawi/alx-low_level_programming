#include <stdio.h>
/**
 * main - it prints the file name of the program
 * @argc: counts the number of thee arguments
 * @argv: array of strings
 *
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
		printf("%s\n", argv[0]);

	return (0);
}
