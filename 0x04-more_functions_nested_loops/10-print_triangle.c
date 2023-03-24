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

	c = 1;
	i = size - 1;
	if (size <= 0)
		_putchar('\n');
	while (c < size)
	{
		i = size - c;
		j = c;
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

