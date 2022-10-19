#include <stdlib.h>
/**
 * create_array - creates an array of char, size 'size' and initializes it
 *
 * @size: desired size for the array
 * @c: the char to initialize the array with
 *
 * Return: Pointer
 */
char *create_array (unsigned int size, char c)
{
	unsigned int i = 1;
	char *ar;

	ar = malloc(size * sizeof(char));
	while(i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
