#include "main.h"

/**
 * print_triangle - prints a triangle on terminal using #
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;
	if (size <= 0)
		_putchar('\n');
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}
}

