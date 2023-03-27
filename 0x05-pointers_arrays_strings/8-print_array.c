#include "main.h"

/**
 * print_array - print elements of an array of integers
 * @a: pointer to arrays
 * @n: number of elements in array
 */

void print_array(int *a, int n)
{
	printf("%d, %d, %d, %d, %d\n", *a, *(a + 1), *(a + 2), *(a + 3), *(a + 4));
}
