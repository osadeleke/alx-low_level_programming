#include "main.h"

/**
 * _strchr - locates a character in string]
 * @s: string
 * @c: character to be located
 *
 * Return: string after character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0' && *s == c)
	{
		return (s);
	}

	return (s + 1);
}
