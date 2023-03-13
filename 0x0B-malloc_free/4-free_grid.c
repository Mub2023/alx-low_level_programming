#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 *  your alloc_grid function.
 *  @grid: the address of the two dimensional grid
 *  @height:height of the grid
 *  Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int var;

	for (var = 0; var < height; var++)
	{
		free(grid[var]);
	}
	free(grid);
}
