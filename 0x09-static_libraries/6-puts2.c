#include "main.h"

/**
 * puts2 - prints every other character of a string starting with
 * first character.
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i, j, n;

	j = 0;
	if (str[j] != '\0')
	{
	_putchar(str[0]);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (n = 1; n < i; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	}
	else
	{
	}
	_putchar('\n');
}
