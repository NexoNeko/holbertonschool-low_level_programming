#include <stdlib.h>
/**
 * string_nconcat - concatenates n bytes of s2 at the end of s1, null termntd
 *
 * @s1: Base string
 * @s2: String to concatenate at the end
 * @n: Num of bytes to concatenate at end of s1
 *
 * Return: pointer to newly concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, ia = 0, c = 0;
	char *a = NULL;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
		while (s1[i])
			i++;
	if (s2 != NULL)
		while (s2[ia] && ia < n)
			ia++;
	c = (i + ia) + 1;
	a = malloc(c * sizeof(char));
	if (!a)
		return (NULL);
	if (i != 0)
	{
		i = 0;
		do {
			a[i] = s1[i];
		} while (s1[i++]);
		i--;
	}
	if (ia != 0)
	{
		ia = 0;
		do {
			a[i] = s2[ia];
			i++;
		} while (s2[ia++] && ia < n);
	}
	return (a);
}
