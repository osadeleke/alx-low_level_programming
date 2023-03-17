#include <stdio.h>

/**
 * main - prints numbers using putchar
 *
 * Return: 0
 */

int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
