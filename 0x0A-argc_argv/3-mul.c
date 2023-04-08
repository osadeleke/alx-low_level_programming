#include <stdio.h>

/**
 * main - program multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful and 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else (if argc == 2)
	{
		printf("%d\n", (argv[1] * argv[2]));
	}

	return (0);
}
