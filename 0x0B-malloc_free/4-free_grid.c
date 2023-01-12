#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 * @grid: the 2-D array of integers to be freed
 * @height: height of the grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
