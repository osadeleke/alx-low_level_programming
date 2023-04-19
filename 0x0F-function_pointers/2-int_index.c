#include "function_pointer.h"

/**
 * int_index - searches for an integer.
 * @array: an array of integers.
 * @size: size of array
 * @cmp: pointers to function
 *
 * Return: index of array if matched, -1 otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
