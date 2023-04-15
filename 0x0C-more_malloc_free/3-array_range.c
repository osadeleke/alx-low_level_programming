#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL if fail. Pointer otherwise.
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (0);

	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (0);

	for (i = 0; i < max - min + 1; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
