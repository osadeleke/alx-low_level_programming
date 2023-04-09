#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i = 0, n;

	while (s[i] != '\0')
	{
		i++;
	}

	n = i - 1;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
