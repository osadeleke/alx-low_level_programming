#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to be raised.
 * @y: value to be raised to.
 *
 * Return: -1 if y is lower than 0.
 * 1 if y is equal to 0
 * the raised value of x to y otherwise.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}
