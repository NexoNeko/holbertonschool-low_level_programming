#include <stdlib.h>
/**
 * array_range - creates an array of MAX size, containing min..max values.
 *
 *
 * Return: pointer to newly assigned array
 */
int *array_range(int min, int max)
{
	int i = 0, c;
	int *ar = NULL;

	if (min > max)
		return (NULL);

	ar = malloc(max * sizeof(int) + 1);
	if (!ar)
		return(NULL);

	while (i <= max)
	{
		ar[i] = min;
		i++;
		min++;
	}
	return (ar);
}
