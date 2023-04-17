#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog details
 * @d: dog function.
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		if (!(*d).name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);

		if (!(*d).age)
			printf("Age: (nil)\n");
		else
			printf("Age: %.1f\n", (*d).age);

		if (!(*d).owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
