#include "3-calc.h"
#include <string.h>

/**
 * main - function starts here.
 * @argc: number of arguments in array
 * @argv: array of arguments.
 *
 * Return: 0 if successful. 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i, j;

	/* Checks number of arguments */
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	/* Checks operator validity */
	if ((*argv[2] != '+' && *argv[2] != '-'
	&& *argv[2] != '*' && *argv[2] != '/'
	&& *argv[2] != '%') || (strlen(argv[2]) > 1))
	{
		printf("Error\n");
		return (99);
	}

	/* Check invalid division by 0 operation */
	if ((*argv[2] == '/' || *argv[2] == '%')
	&& *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}

	/* Store arguments in int variables */
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	/* Call function to check operator and add */
	(*get_op_func(argv[2]))(i, j);

	return (0);
}
