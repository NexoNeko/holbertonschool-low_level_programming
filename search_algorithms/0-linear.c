#include "search_algos.h"

/** 
 * linear_search - performs a linear search on an array
 *
 * @array: array in which to perform the search.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: (Unsigned long int) Index of array on success; -1 on failure.
 */
int linear_search(int *array, size_t size, int value)
{
	long unsigned int i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
