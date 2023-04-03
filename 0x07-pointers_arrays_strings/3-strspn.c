#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: characters
 * @accept: characters
 *
 * Return: lenght of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = j = k = 0;

	while (s[j] != ',')
	{
		for (; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				k++;
			}
		}
		j++;
	}

	return (k);
}
