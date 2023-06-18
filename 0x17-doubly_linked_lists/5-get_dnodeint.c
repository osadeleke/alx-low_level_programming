#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a linked list
 * @head: pointer to head of list
 * @index: nth node check
 * Return: value at nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	for (i = 0; i <= index; i++)
	{
		if (!current)
		{
			return (NULL);
		}
		if (i == 0)
		{
			return (current);
		}
		current = current->next;
	}
	return (current);
}
