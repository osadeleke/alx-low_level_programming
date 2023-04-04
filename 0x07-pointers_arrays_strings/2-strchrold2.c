#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string
 * @c: character to be located
 * 
 * Return: character plus
 */

char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s + 1);
}
