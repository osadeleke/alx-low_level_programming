#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in decimal
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int check = 1, w = n, i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (w > 0)
	{
		i++;
		w = w >> 1;
	}

	check = check << (i - 1);

	for (; i > 0; i--)
	{
		if (n & check)
			_putchar('1');
		else
			_putchar('0');

		check = check >> 1;
	}
}
