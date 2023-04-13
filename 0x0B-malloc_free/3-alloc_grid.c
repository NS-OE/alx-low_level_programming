#include "main.h"
#include <stdio.h>

/**
 *  alloc_grid -  a pointer to a 2 dimensional array of integers.
 *  @height: array row
 *  @width: array column
 *  Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **ch;
	int i, j;


	if (width <= 0 || height <= 0)
		return (NULL);


	ch = malloc(sizeof(int *) * height);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ch[i] = malloc(sizeof(int) * width);
		if (ch[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ch[i][j] = 0;
		}
	}

	return (ch);
}
