#include "main.h"
/**
 * free_grid - free matrix
 * @height: the height
 * @grid: the grid
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

