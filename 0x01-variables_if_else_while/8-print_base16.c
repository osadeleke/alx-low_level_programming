#include <stdio.h>

/**
 * main - print hexadecimals in lower case
 *
 * Return: 0;
 */

int main(void)
{
	char c = '0';
	char n = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}

