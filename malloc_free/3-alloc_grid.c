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

	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		a[w] = malloc(width * sizeof(int));
		if (a == NULL)
		{
			for (--w; w >= 0; w--)
				free(a[w]);
			free(a);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
		for (w = w; w < width; w++)
			a[h][w] = 0;
	return (a);
}
