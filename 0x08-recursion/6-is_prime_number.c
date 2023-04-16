#include "main.h"

/**
 * _prime - check number for prime
 * @n: number to be checked.
 * @a: guesses.
 *
 * Return: 1 if prime number, 0 if otherwise.
 */

int _prime(int n, int a)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}

	return (_prime(n, a + 1));
}

/**
 * is_prime_number - function to check prime number or not
 * @n: number to be checked.
 *
 * Return: 1 if prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_prime(n, 2));
}
