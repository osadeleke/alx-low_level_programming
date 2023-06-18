#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: pointer to head of list
 * @n: value in node to be added
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
