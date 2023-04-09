#include "main.h"

/**
 * _strcat - concatenate two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: String.
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (s);
}
