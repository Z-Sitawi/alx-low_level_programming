#include <stdio.h>
#include "search_algos.h"
#include <math.h>
/**
* interpolation_search - Searches for a value in a sorted array
* of integers using the interpolation search algorithm.
*
* @array: a pointer to the first element the sorted array to search in.
* @size: the number of elements in array.
* @value: the value to search for.
* Return: The first index where value is located, or -1 if not found.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low)
			/ (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}
	pos = low + (((double)(high - low)
		/ (array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
