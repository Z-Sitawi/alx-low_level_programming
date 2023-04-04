#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print_chessboard
 *
 * @a: a pointer to an array of characters.
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
