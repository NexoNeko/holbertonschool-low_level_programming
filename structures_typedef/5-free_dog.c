#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees heap memory from dog vars
 *
 * @d: dog record to free
 *
 * Return: new dog record;
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
