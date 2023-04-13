#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  alloc_grid -  a pointer to a 2 dimensional array of integers.
 *  @height- array row
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
		ch[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ch[i][j] = 0;
		}
	}

	return (ch);
}

void print_grid(int **grid, int width, int height)
{
	    int w;
	        int h;

		    h = 0;
		        while (h < height)
				    {
					            w = 0;
						            while (w < width)
								            {
										                printf("%d ", grid[h][w]);
												            w++;
													            }
							            printf("\n");
								            h++;
									        }   
}

/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    int **grid;

	        grid = alloc_grid(6, 4);
		    if (grid == NULL)
			        {
					        return (1);
						    }
		        print_grid(grid, 6, 4);
			    printf("\n");
			        grid[0][3] = 98;
				    grid[3][4] = 402;
				        print_grid(grid, 6, 4);
					    free_grid(grid, 4);
					        return (0);
}
