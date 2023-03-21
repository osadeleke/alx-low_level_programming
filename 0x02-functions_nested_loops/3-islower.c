#include "main.h"

/**
 * _islower - checks for lower case char
 * @c: character argument
 * Return: 1 if lower and 0 if upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}

	return (c);
}
