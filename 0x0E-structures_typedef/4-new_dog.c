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
	char *a;
	char *b;
	int i = 0, j = 0, k, l;

	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	a = malloc(sizeof(char) * i);
	if (a == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		a[k] = name[k];

	b = malloc(sizeof(char) * j);
	if (b == NULL)
		return (NULL);

	for (l = 0; l < j; l++)
		b[k] = owner[k];

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = a;
	new_dog->age = age;
	new_dog->owner = b;

	return (new_dog);
}
