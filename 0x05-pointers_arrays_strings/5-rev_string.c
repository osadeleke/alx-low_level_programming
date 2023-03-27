#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int i, j, n;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	n = i;
	j = 0;
	while (n >= 0)
	{
		s[n] = _putchar(s[i - j]);
		n--;
		j++;
	}
}
