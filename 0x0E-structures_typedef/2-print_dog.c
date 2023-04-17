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
	if (!(*d).name)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", (*d).name);

	if (!(*d).age)
		printf("Age: (nill)\n");
	else
		printf("Age: %.1f\n", (*d).age);

	if (!(*d).owner)
		printf("Owner: (nill)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
