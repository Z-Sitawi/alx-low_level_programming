#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: the array to check
 * @size: is the number of elements in the array.
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 *
 * Description: If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
