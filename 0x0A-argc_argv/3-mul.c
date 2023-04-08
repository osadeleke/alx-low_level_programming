#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful and 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}

	return (0);
}
