#include "lists.h"

/**
 * dlistint_len - returns the number of elements in linked list
 * @h: points to head of the linked list
 * Return: the number of elements in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current)
	{
		i++;
		current = current->next;
	}

	return (i);
}
