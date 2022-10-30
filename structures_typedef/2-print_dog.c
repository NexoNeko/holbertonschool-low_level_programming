#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the values stored within a var of type dog
 *
 * @d: pointer to dog variable
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
