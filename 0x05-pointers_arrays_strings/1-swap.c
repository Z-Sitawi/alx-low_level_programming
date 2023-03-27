#include "main.h"
/**
 * swap_int - updates the value of the pointer
 *
 * @a:the first pointer
 * @b: the second pointer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
