#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2-D grid previously created by your alloc_grid function
 * @grid: array being freed
 * @height: rows of array
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
