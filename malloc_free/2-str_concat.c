#include <stdlib.h>
/**
 * str_concat - Concatenates two strings, returns pointer to it, malloc
 *
 * @s1: string to the very left on the concatenation
 * @s2: string to the very right on the concatenation
 *
 * Return: Pointer to new *str
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, ia = 0, c = 0;
	char *a = NULL;

	if (s1 == NULL && s2 == NULL)
		return (a);

	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[ia])
			ia++;
	}

	c = (i + ia) + 1;
	a = malloc(c * sizeof(char));
	if (a = NULL)
		return(a);

	if (i != 0)
	{
		i = 0;
		do {
			a[i] = s1[i];
		} while (s1[i++]);
	}
	if (ia != 0)
	{
		i--;
		ia = 0;
		do {
			a[i] = s2[ia];
			i++;
		} while (s2[ia++]);
	}
	return (a);
}
