#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: the minimumu values stored
 * @max: the maximum values stored
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *minmax;
	int i, length = (max + 1) - min;

	if (min > max)
		return (NULL);

	minmax = malloc(length * sizeof(int));

	if (minmax == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		minmax[i] = min++;
	}

	return (minmax);
}
