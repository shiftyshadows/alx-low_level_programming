#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 *
 * @width:width of grid
 * @height: height of grid
 *
 * Return: grid array
 */


int **alloc_grid(int width, int height)
{
	/* Declaration of variables */
	int **grid, j, i;

	/* Code Statements */
	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the 2D array */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for each row of the 2D array */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory and return NULL on failure */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* Initialize each element of the row to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

