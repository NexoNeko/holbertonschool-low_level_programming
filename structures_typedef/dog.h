#ifndef DOG_H
#define DOG_H
/**
 * struct dog - stores a dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * init_dog - initializes a var of type dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
