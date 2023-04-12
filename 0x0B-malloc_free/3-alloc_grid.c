#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if fail.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	p = malloc(height * sizeof(*p));
	if (p == NULL || width <= 0 || height <= 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(**p));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (0);
		}

		for (j = 0; j < height; j++)
			p[i][j] = 0;
	}
	return (p);
}
