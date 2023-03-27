#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: pointer to arrays
 * @n: number of elements in array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < n)
		{
			printf("%d, ", *(a + i));
		}
		else if (i == n)
		{
			printf("%d", *(a + i));
		}
	}
	printf("\n");
}
