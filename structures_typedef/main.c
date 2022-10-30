#include <stdio.h>
#include "dog.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = _new_dog("Ghost", 4.75, "Jon Snow");
	free_dog(my_dog);
	return (0);
}
