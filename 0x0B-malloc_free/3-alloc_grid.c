#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create dimensional array of integers with params
 * @height: height of table
 * @width: width of the bidimentional table
 * Return: Null if fail or pointer if success
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j, k;
	int **grid = (int **)malloc(width * sizeof(int **);
	int grid[i] = malloc(height * sizeof(int *);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (grid == NULL || grid[i] == NULL)
		return (NULL);

	for (j = 0; j < width; j++)
	{
		for (k = 0; k <= height; k++)
			grid[j][k] = i;
	}
	return (grid);
}

