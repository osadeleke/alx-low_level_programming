#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins to make change for
 * an amount of money
 * @argc: number of input array
 * @argv: string inputed
 *
 * Return: 0 if sucessful
 */

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
		{
			printf("0\n");
		}
		else if (atoi(argv[1]) > 0)
		{
			cents = atoi(argv[1]);
			coins = cents / 25;
			cents = cents % 25;
			coins = coins + cents / 10;
			cents = cents % 10;
			coins = coins + cents / 5;
			cents = cents % 5;
			coins = coins + cents / 2;
			cents = cents % 2;
			coins = coins + cents / 1;
			printf("%d\n", coins);
		}
	}
	return (0);
}
