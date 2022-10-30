#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a var of type dog
 *
 * @d: pointer to dog variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: whom owns the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL || d == NULL || owner == NULL)
	{
		printf("Ok");
		exit(1);
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
}
