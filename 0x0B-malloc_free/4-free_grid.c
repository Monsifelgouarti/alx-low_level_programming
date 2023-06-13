#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - deallocate the memory of a grid.
 * @grid: pointer to a grid
 * @height: height of the grid
 * * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
