#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - new dog function
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *a, *b;
	int i = 0, j = 0, k, l;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	a = malloc(sizeof(char) * i + 1);
	if (a == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	b = malloc(sizeof(char) * j + 1);
	if (b == NULL)
	{
		free(new_dog);
		free(a);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		a[k] = name[k];
	for (l = 0; l <= j; l++)
		b[l] = owner[l];
	new_dog->name = a;
	new_dog->age = age;
	new_dog->owner = b;
	return (new_dog);
}
