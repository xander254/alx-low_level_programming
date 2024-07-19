#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - return a ptr to a 2d array of ints
  * @width: width of the grid to be innnitialized
  * @height: height of the grid to be innitialized
  * Return: pointer to a 2d array of integers else NULL
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * (height));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid);
		}
		for (j = 0; j < width; j++)
		{
			grid[j] = malloc(sizeof(int) * width);
			if (grid[j] == NULL)
			{
				free(grid);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

