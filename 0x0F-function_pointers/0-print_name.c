#include "function_pointers.h"

/**
 * print_name - function to pointer to print name
 * @name: name string.
 * @f: pointer to function.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
