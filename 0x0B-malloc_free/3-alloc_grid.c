#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 * @width: int
 * @height: int
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(matrix[i]);
        free(matrix);
        return (NULL);
		}
		for (j = 0; j < width; j++) /* set array values to 0 */
			matrix[i][j] = 0;
	}

	return (matrix);
}
