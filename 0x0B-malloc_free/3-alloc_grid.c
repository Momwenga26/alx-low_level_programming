#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of ints
 * @width: witdth of the 2-d array
 * @height: height of the 2-d array
 *
 * Return: pointer of an array of ints
 */

int **alloc_grid(int width, int height)
{
	int **grd;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	grd = malloc(sizeof(int *) * height);
	if (grd == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		grd[h] = malloc(sizeof(int) * width);
		if (grd[h] == NULL)
		{
			for (; h >= 0; h--)
				free(grd[h]);
			free(grd);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grd[h][w] = 0;
	}
	return (grd);
}
