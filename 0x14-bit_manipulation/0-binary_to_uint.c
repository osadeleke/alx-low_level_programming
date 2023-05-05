#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: 0 if char in string not 0 or 1 and digit otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int dig = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dig = dig * 2 + (b[i] - '0');
		i++;
	}
	return (dig);
}
