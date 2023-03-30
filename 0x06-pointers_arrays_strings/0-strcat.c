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

	return (dest);
}
