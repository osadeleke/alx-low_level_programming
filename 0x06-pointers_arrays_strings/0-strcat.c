#include "main.h"

/**
 * _strcat - concatenate two strings.
 * @dest: first string
 * @src: second string
 *
 * Return: Dest string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}

	l = 0;
	for (k = i; k >= i && k <= j + 1; k++)
	{
		dest[k] = src[l];
		l++;
	}

	return (dest);
}
