#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: separator to be used.
 * @n: number of integers to be printed.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
