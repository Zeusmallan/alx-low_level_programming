#include <stdlib.h>
#include "main.h"
/**
 * free_grid - allocates and free memory.
 * @grid: Width of a grid.
 * @height: Height of a grid.
 * Return: Free or empty grid.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
