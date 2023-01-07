#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	unsigned long int middle;
	unsigned long int i;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	print_array(array, size);

	middle = (size - 1) / 2;

	if (array[middle] == value)
		return (value);

	if (array[middle] > value)
		for (i = 0; i < size - 1; i++)
		{
			printf("Searching in array: ");
			print_array(&array[middle], size - middle);
			if (array[i] == value)
				return ((int)i);
		}
	else
		for (i = size - 1; i > 0; i--)
		{
			printf("Searching in array: ");
			print_array(&array[middle], size - middle);
			if (array[i] == value)
				return ((int)i);
		}
	return (-1);
}

/**
 * print_array - Prints N elements of an array of integers
 *
 * @a: The array to be printed
 * @n: The number of integers to be printed
 *
 * Return: void
 */
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
