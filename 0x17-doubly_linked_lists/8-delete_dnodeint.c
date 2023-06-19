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
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * @head: pointer to head of node
 * @index: index to be deleted
 * Return: 1 if successful, -1 if fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i, len;

	len = dlistint_len(*head);
	if (index > len || len == 0)
		return (-1);
	current = *head;
	if (len > 1 && index != 0)
	{
		if (current->next->next == NULL)
		{
			tmp = current->next;
			current->prev = NULL;
			current->next = NULL;
			free(tmp);
			return (1);
		}
	}
	if (len == 1 && index == 0)
	{
		*head = NULL;
		free(current);
		return (1);
	}
	if (index == 0)
	{
		*head = current->next;
		current->next->prev = NULL;
		free(current);
	}
	else
	{
		for (i = 1; i < index; i++)
			current = current->next;
		tmp = current->next;
		current->next->next->prev = current;
		current->next = current->next->next;
		free(tmp);
	}
	return (1);
}
