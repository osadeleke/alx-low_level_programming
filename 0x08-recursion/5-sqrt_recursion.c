#include "main.h"

/**
 * _sqrt - find the square root number
 * @n: number
 * @a: square root guesses
 *
 * Return: a if square root found and -1 otherwise
 */

int _sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);

	return (_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find square root.
 *
 * Return: -1 if n does not have a natural square root
 * the natural square of n if otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}
