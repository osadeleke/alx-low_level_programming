#include "lists.h"

/**
 * add_nodeint - add new node to head of list
 * @head: pointer to head of list.
 * @n: data in node.
 *
 * Return: pointer to new head of list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (0);

	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
