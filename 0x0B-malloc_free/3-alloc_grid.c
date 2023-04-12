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

	p = malloc(height * sizeof(int));
	if (p == NULL)
		return (0);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
			return (0);

		for (j = 0; j < height; j++)
			p[i][j] = 0;
	}
	return (p);
}
