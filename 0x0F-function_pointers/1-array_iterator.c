#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function executes function given as parameter
 * @array: an array.
 * @size: size of array
 * @action: function pointers
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
