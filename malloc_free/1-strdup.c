#include <stdlib.h>
/**
 * _strdup - copies a string to heap and returns a pointer to it.
 *
 * @str: string to be copied
 *
 * Return: Pointer to new *str
 */
char *_strdup(char *str)
{
	int i = 0;
	char *a = NULL;

	while (str[i])
		i++;

	a = malloc(i * sizeof(char));

	if (a == NULL)
		return (a);

	i = 0;

	do {
		a[i] = str[i];
	} while (str[i++]);

	return (a);
}
