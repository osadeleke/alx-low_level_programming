#include "lists.h"

/**
 * list_len - prints elements of a list.
 * @h: pointer to the head of node.
 *
 * Return: size of elements in list.
 */

size_t list_len(const list_t *h)
{
	int n;

	if (h == NULL)
		return (-1);

	n = 1;
	if (h->next == NULL)
	{
		n++;
		return (n);
	}
	else if (h->next != NULL)
	{
		n++;
		h = h->next;
		list_len(h);
	}
	return (n);
}
