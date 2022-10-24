#include <stdlib.h>
/**
 * _calloc - creates an array of nmemb elements of size size each in heap.
 *
 * @nmemb: size of the array
 * @size: size of each element on the array
 *
 * Return: pointer to newly assigned array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *a = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);

	i = 0;
	do {
		a[i] = '\0';
		i++;
	} while (i < (nmemb * size));

	return (a);
}
