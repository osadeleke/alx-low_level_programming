#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: factorial to be returned.
 *
 * Return: -1 if n is lower than 0
 * 1 if n is 0
 * value of n factorial otherwise
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
