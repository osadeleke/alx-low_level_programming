#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: bytes
 *
 * Return: 98 if failed. pointer otherwise.
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
		return (p);
}
