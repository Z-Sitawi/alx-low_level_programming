#include <stdio.h>
#include "search_algos.h"
#include <math.h>
/**
* jump_search - Searches for a value in a sorted array
* of integers using the Jump search algorithm
*
* @array: a pointer to the first element the sorted array to search in.
* @size: the number of elements in array.
* @value: the value to search for.
* Return: The first index where value is located, or -1 if not found.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, i;
	int jump;
	char *msg = "Value found between indexes";

	if (!array)
		return (-1);
	low = 0;
	jump = sqrt(size);
	high = jump;
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	while (high < size && array[high] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high = high + jump;
	}
	printf("%s [%ld] and [%ld]\n", msg, low, high);
	if (high > size - 1)
		high = size - 1;
	for (i = low; i <= high; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
