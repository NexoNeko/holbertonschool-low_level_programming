#include "search_algos.h"

/**
 * binary_search - Performs a binary search on a given array
 *
 * @array: The array to perform the search on
 * @size: Size of the array we're searching
 * @value: Value we're searching for
 *
 * @Return: Index where value was found
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned long int middle = 0;
	unsigned long int high = size - 1;
	unsigned long int low = 0;
	unsigned long int i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		middle = (high + low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			if (i != low)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
