#include "function_pointers.h"

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
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
