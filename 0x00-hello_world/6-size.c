#include <stdio.h>

/**
 * main - prints size of various types
 *
 * Return: 0 if successful
 */

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long));
	printf("Size of a long long int: %d byte(s)", sizeof(double));
	printf("Size of a float: %d byte(s)", sizeof(float));

	return (0);
}
