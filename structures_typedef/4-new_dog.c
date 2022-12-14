#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * rplce - allocates some memory and copies a string to said memory
 *
 * @src: source string
 *
 * Return: Pointer to allocated memory
 */
char *rplce(char *src);

/**
 * new_dog - creates a new dog record, allocated in heap.
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new dog record;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogz;

	dogz = malloc(sizeof(dog_t));
	if (dogz == NULL)
		return (NULL);


	dogz->name = rplce(name);
	if (dogz->name == NULL)
	{
		free(dogz);
		return (NULL);
	}
	dogz->owner = rplce(owner);
	if (dogz->owner == NULL)
	{
		free(dogz->name);
		free(dogz);
		return (NULL);
	}

	dogz->age = age;

	return (dogz);
}



/**
 * rplce - allocates some memory and copies a string to said memory
 *
 * @src: source string
 *
 * Return: Pointer to allocated memory
 */
char *rplce(char *src)
{
	int i;
	char *f;

	f = malloc(sizeof(src));

	if (f == NULL)
		return (NULL);

	for (i = 0; src[i]; i++)
		f[i] = src[i];
	f[i] = '\0';

	return (f);
}
