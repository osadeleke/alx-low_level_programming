#include "main.h"

/**
 * print_line - prints a line using int number of dashes
 * @n: number of dashes to use to print line
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
