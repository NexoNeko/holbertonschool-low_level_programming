#include <stdlib.h>
/**
 * free_grid - frees memory previously allocated by alloc_grid
 *
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	while (height > 0)
		free(grid[--height]);
	free(grid);
}
