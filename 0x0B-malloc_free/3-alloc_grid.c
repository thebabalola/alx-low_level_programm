#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 *
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: Pointer to a 2D array of integers or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **gridsOut;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridsOut = malloc(height * sizeof(int *));
	if (gridsOut == NULL)
	{
		free(gridsOut);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridsOut[i] = malloc(width * sizeof(int));
		if (gridsOut[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridsOut[i]);
			free(gridsOut);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridsOut[i][j] = 0;
		}
	}

	return (gridsOut);
}
