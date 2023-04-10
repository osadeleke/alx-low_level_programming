#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *n;
	int number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			number = strtol(argv[i], &n, 10);
			if (isdigit(*argv[i]))
			{
				sum = sum + number;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
