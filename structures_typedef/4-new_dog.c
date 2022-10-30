#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
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
	dog_t *newdog;
	char *nil = "(nil)";

	newdog = malloc(sizeof(dog_t));

	if (!newdog)
		return (NULL);

	if (name != NULL)
		newdog->name = name;
	else
		newdog->name = nil;

	newdog->age = age;

	if (owner != NULL)
		newdog->owner = owner;
	else
		newdog->owner = nil;

	return (newdog);
}
