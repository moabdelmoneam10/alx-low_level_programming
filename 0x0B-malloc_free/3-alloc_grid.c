
#include "main.h"
/**
 * alloc_grid - set matrix with width and heigth given
 * @width: the width
 * @height: the height
 * Return: the pointer of matrix
 */


int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * weight);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j])
			}
			free(grid);
			return (NULL);
		}
	}
	for (j = 0; j < i; j++)
	{
		for (j = 0; j < weidth; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

