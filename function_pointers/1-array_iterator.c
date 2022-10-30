#include <stddef.h>
/**
 * array_iterator - executes a function as a parameter on evry x elmnt on array
 *
 * @array: pointer to an array
 * @size: size of the array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	do {
		action(array[i]);
	} while (++i < size);
}
