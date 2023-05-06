#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal digit to be checked.
 * @index: index starting from 0 of the bit to get.
 *
 * Return: value of the bit at index or -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check = 1, w = n, i = 0, value;

	if (n == 0)
		return (0);

	while (w <= 1)
	{
		i++;
		w = w >> 1;
	}

	if (index > i)
		return (-1);

	check = check << index;

	if (n & check)
		value = 1;
	else
		value = 0;

	return (value);
}
