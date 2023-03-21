#include "main.h"

/**
 * jack_bauer - print 24 hours in minutes
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int h;

		for (h = 0; h < 60; h++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar('\n');
		}
	}
}
