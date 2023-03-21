#include "main.h"

/**
 * print_sign - print sign of number followed by , and return val.
 * @n: integer to check
 * Return: 1 if n is positive, 0 if n is zero and -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (n);
}
