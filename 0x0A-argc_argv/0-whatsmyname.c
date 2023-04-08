#include <stdio.h>

/**
 * main - prints program name followed by new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
