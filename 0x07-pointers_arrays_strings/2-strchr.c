#include "main.h"

/**
 * _strchr - function that locates a character
 * @s: string
 * @c: character to be located
 *
 * Return: pointer to first occurence if found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
			return (s + 1);
		s++
	}

	return (s + 1)
}
