#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - free a 2D grid
 * @grid: 2D array
 * @height: columns
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
