#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: pointer to integer
 * @index: index of bit to be set.
 *
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	if (index > 64)
		return (-1);

	check = ~(check << index);
	*n = *n & check;

	return (1);
}
