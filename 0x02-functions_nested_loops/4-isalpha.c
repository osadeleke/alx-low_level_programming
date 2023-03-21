#include "main.h"

/**
 * _isalpha - checks alphabetic character
 * @c: character argument
 * Return: 1 if character and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (c);
}
