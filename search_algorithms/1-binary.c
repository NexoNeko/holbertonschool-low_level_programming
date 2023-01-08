#include "search_algos.h"

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
			return(middle);
	}
	return (-1);
}

void print_array(int *array, int size)
{
	int i, size_max;

	size_max = size;
	size -= 1;
	if (size < 0)
		putchar('\n');
	else
	for (i = 0; size > -1; size--)
	{
		printf("%d", array[i]);
		i++;
		if (i < size_max)
			printf(", ");
		else
			putchar('\n');
	}
}