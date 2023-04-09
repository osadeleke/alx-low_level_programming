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

	if (*s == '\0' || *accept == '\0')
	{
		return (k);
	}

	while (s[j] != ',')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
			{
				k++;
			}
			i++;
		}
		j++;
	}

	return (k);

}
