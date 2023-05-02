#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: pointer to first node
 *
 * Return: head node's data(n) if head != NULL and 0 otherwise.
 */

int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	listint_t *c;
	int n;

	if (*head == NULL)
		return (0);

	n = p->n;
	c = p->next;
	*head = c;
	free(p);

	return (n);
}
