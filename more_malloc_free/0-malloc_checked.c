#include <stdlib.h>
/**
 * malloc_checked - assigns the desired memory using malloc
 *
 * @b: ammount of memory to be assigned
 *
 * Return: pointer to memory, exits w/98 if failed to alloc
 */
void *malloc_checked(unsigned int b)
{
	int *str = NULL;

	str = malloc(b));
	if (!str)
		exit(98);
	else
		return (str);
}
