#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i / 2; j++)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
	}
}
