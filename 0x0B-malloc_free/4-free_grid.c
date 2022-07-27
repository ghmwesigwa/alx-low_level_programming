
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to 2D array
 * @height: height of array
 * Return: free'd grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
