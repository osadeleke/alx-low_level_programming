#include "main.h"

/**
 * _strncat - concatenate two strings.
 * @dest: first string
 * @src: Second string
 * @n: number of bytes to concatenate from second string.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*p = *src;
		src++;
		p++;
	}

	*p = '\0';

	return (dest);
}
