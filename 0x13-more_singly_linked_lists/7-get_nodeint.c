#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: pointer to node 0
 * @index: the nth node to be gotten
 *
 * Return: return the nth node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head, *c;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (p->next == NULL)
			return (NULL);
		c = p->next;
		p = c;
	}
	return (p);
}
