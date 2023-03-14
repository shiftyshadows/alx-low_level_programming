#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: destination string
 * @height: source string
 *
 */

void free_grid(int **grid, int height)
{
	/* Declaration of variables*/
	int i;

	/* Code Statements */
	/* Free memory for each row of the 2D array */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free memory for the 2D array itself */
	free(grid);
}

