#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2d array initialized with zeros
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
	if (!a)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		a[w] = malloc(width * sizeof(int));
		if (!a[w])
		{
			while (w > 0)
				free(a[--w]);
			free(a);
			a = NULL;
			return (a);
		}
	}
	for (h = 0; h < height; h++)
		for (w = w; w < width; w++)
			a[h][w] = 0;
	return (a);
}
