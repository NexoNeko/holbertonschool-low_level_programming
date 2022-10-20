#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2d array initialized with 0s
 *
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to new *str
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **a = NULL;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(width * sizeof(int));
	if (a == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		a[w] = malloc(height * sizeof(int));
		if (a == NULL)
			return (NULL);
		for (h = 0; h < width; h++)
			a[w][h] = 0;
	}
	return (a);
}
