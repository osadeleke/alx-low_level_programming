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

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head of list.
 * @idx: index of list where new node should be added.
 * @n: value of the new node.
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *tmp, *new_node;
	unsigned int i;
	size_t len;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *h;
	len = dlistint_len(*h);
	for (i = 0; i < idx; i++)
	{
		if (idx > len + 1)
			return (NULL);
		if (i > 0)
		{
			if (current->next == NULL)
				break;
			current = current->next;
		}
	}
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		if (current && !current->next)
			new_node = add_dnodeint_end(h, n);
		else
		{
			tmp = current->next;
			new_node->next = tmp;
			new_node->prev = current;
			current->next = new_node;
			tmp->prev = new_node;
		}
	}
	return (new_node);
}
