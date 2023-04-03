#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: pointer to first occurence if found or else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++
	}

	/* return (NULL); */
}
