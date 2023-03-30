#include "main.h"

/**
 * _strncpy - copies n bytes of strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to copy
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		*p = *src;
		src++;
		p++;
	}

	return (dest);
}
