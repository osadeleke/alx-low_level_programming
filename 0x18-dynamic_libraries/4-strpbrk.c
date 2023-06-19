#include "main.h"

/**
 * _strpbrk - function searches a string for any set of bytes
 * @s: string
 * @accept: bytes
 * Return: s string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
