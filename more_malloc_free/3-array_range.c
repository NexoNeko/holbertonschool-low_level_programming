#include <stdlib.h>
/**
 * array_range - creates an array of MAX size, containing min..max values.
 *
 * @min: the starting value
 * @max: the max value
 * Return: pointer to newly assigned array
 */
int *array_range(int min, int max)
{
	int i = 0, c;
	int *ar = NULL;

	if (min > max)
		return (NULL);

	c = (max - min) + 1;
	ar = calloc(c, sizeof(int));
	if (!ar)
		return (NULL);

	while (i < c)
	{
		ar[i] = min;
		i++;
		min++;
	}
	return (ar);
}
