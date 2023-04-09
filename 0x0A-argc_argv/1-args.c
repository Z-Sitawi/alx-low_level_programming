#include <stdio.h>
/**
 * main - it prints the number of command-line arguments passed to the program
 * @argc: counts the number of thee arguments
 * @argv: array of strings
 *
 * Return: Always (0) Success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc -1);

	return (0);
}
