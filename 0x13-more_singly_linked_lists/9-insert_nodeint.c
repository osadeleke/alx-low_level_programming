#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to first node in list.
 * @idx: index of the list where the new node should be added.
 * @n: data to be added.
 *
 * Return: pointer to list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *c;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);

	p = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (p->next == NULL)
			return (NULL);
		p = p->next;
	}

	c->n = n;
	c->next = p->next;
	p->next = c;

	return (*head);
}
