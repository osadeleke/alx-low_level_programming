#include "main.h"

/**
 * puts_half - prints half of a string followed by new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0, n;

	if (str[0] != '\0')
	{
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		for (n = (i + 1) / 2; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = i / 2; n < i; n++)
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
