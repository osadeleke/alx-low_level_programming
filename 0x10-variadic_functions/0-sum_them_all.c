#include "variadic_functions.h"

/**
 * sum_them_all - function returns the sum of all it's parameters
 * @n: number of parameters
 *
 * Return: 0 if successful. 1 otherwise.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg, int);

	va_end(arg);

	return (sum);
}
