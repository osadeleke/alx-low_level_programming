#include "3-calc.h"

/**
 * get_op_func - function to pointer to get operation
 * @s: operator
 *
 * Return: pointer to function.
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t new;

	new.op = s;
	new.f = NULL;

	while (*new.op == '+' || *new.op == '-' || *new.op == '*'
	|| *new.op == '/' || *new.op == '%')
	{
		new.f = (*new.op == '+') ? &op_add :
			(*new.op == '-') ? &op_sub :
			(*new.op == '*') ? &op_mul :
			(*new.op == '/') ? &op_div :
			(*new.op == '%') ? &op_mod :
			NULL;

		new.op++;
	}

	return (new.f);
}
