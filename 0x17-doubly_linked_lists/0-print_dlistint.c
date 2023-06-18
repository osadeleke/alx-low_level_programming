#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: points to head of list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}

	return (i);
}
