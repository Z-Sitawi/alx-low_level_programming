#include <stdio.h>
#include "search_algos.h"
/**
* linear_search - It searches for a value in an array of integers
* using the Linear search algorithm.
*
* @array: a pointer to the first element of the array to search in.
* @size:  is the number of elements in array.
* @value:  is the value to search for.
*
* Return: The first index where value is located, or -1 if not found.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}
