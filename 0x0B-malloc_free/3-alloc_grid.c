#include <stdlib.h>

/**
 * alloc_grid -Allocates a grid of integers and initializes each element to 0.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: returns NULL or returns a pointer to the newly allocated 2D grid.
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	int **grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(width * sizeof(int));

	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(grid[j]);
	}
	free(grid);
	return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	}

	return (grid);
}
