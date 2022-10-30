#ifndef DOG_H
#define DOG_H
/**
 * struct dog - stores a dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

/**
 * init_dog - initializes a var of type dog
 *
 * @d: pointer to dog variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: whom owns the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints the values stored within a var of type dog
 *
 * @d: pointer to dog variable
 *
 */
void print_dog(struct dog *d);
#endif
