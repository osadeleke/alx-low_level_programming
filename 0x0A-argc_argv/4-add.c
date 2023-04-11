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
	int i, j, sum = 0;
	char c;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				c = argv[i][j];
				if (isdigit(c))
				{

				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
