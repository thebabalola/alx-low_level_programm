#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees a 2-dimensional grid of integers.
 *
 * @grid: The 2D array to be freed.
 * @height: The height of the grid.
 *
 * Return: No return value.
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid != NULL && height > 0)
	{
		for (n = 0; n < height; n++)
		{
			free(grid[n]);
		}
		free(grid);
	}
}
