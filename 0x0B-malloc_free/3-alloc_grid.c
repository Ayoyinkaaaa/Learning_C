#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array o
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: pointer to the 2 array or NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int j;
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		grid[j] = malloc(width * sizeof(int));
		if (grid[j] == NULL)
		{
			for (k = 0; k < j; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}

	return (grid);
}
