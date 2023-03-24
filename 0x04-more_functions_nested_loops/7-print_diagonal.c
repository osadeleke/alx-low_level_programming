#include "main.h"

/**
 * print_diagonal - function that prints forward slashes diagonally
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 1, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (i <= n)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
