#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: pointer to 2-D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **g_out;
	int j, k;

	if (width < 1 || height < 1)
		return (NULL);

	g_out = malloc(sizeof(int *) * height);

	if (g_out == NULL)
	{
		free(g_out);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		g_out[i] = malloc(width * sizeof(int));
		if (g_out[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g_out[i]);
			free(g_out);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			g_out[i][j] = 0;
	}
	return (g_out);
}
