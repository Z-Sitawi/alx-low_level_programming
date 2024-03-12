#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - It searches for a value in a sorted array of integers
* using the Binary search algorithm.
* We assume that array will be sorted in ascending order
* and that value won’t appear more than once in array.
*
* @array: a pointer to the first element of the array to search in.
* @size:  is the number of elements in array.
* @value:  is the value to search for.
*
* Return: The first index where value is located, or -1 if not found.
*/
int binary_search(int *array, size_t size, int value)
{
	int idx;
	int mid, low, high;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (idx = low; idx <= high; idx++)
		{
			if (idx < high)
			{
				printf("%d, ", array[idx]);
			}
			else
				printf("%d\n", array[idx]);
		}

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

	}
	return (-1);
}
