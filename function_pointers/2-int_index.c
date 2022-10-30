#include <stddef.h>
/**
 * int_index - looks for the first appearance of a char on an array
 *
 * @array: Pointer to the array
 * @size: size of the array
 * @cmp: pointer to the search function
 *
 * Return: -1 on error, array index of first occurrence on success.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int a;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		do {
			a = cmp(array[i]);
			if (a != 0)
				return (i);
		} while (++i < size);
	}
	return (-1);
}
