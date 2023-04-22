#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own function.
 * @argc: number of arguments
 * @argv: arguments array.
 *
 * Return: 0 if successful. 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i;
	int no_bytes;
	int (*op_address)(int, char **) = main;
	char *s = "";

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	no_bytes = atoi(argv[1]);

	if (no_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < no_bytes; i++)
	{
		printf("%s", s);
		printf("%.2x", *(unsigned char *)op_address);
		s = " ";
		op_address++;
	}

	printf("\n");
	return (0);
}
