#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array.
 * @size: number of elements in each element of the array.
 *
 * Return: NULL if fail. pointer otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **p;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb);
	if (p == NULL)
		return (0);

	for (i = 0; i < nmemb; i++)
	{
		p[i] = malloc(size - 1);
		for (j = 0; j < size; j++)
		{
			*(p + i + j) = 0;
		}
	}
	return (p);
}
