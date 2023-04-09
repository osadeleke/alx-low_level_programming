#include "main.h"

/**
 * _strcpy - copies string including terminating byte
 * @dest: first pointer
 * @src: second pointer
 * Return: dest if successful.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
