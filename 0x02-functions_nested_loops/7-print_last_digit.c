#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: digit inputed
 * Return: the last digit of inputed number
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n *= (-1);
	}

	_putchar(n + '0');

	return (n);
}
