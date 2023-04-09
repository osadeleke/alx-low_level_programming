#include <stdio.h>

/**
 * main - prints numbers from 1 - 100 replacing mulitplies of 3 with
 * Fizz, mulitples of 5 with Buzz and multiples of 3 and 5 with FizzBuzz.
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz");
			if (a != 100)
			{
				printf(" ");
			}
		}
		else if (a % 5 == 0 && a % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");

	return (0);
}
