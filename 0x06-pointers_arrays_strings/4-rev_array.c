#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: is a string
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int rev;

	for (int i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = rev;
	}
}
