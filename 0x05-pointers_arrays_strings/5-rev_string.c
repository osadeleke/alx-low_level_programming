#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int i, j, l, k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	char f[i + 1];

	for (j = 0; j < i; j++)
	{
		f[j] = s[j];
	}

	k = i - 1;

	for (l = 0; l < i; l++)
	{
		s[k] = f[l];
		k--;
	}
}
