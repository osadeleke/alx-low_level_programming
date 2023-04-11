#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character to fill
 *
 * Return: chars
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		p = malloc(sizeof(char) * size);
	}

	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(p + i) = c;
		}
	}
	return (p);
}
