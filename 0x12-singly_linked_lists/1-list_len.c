#include "lists.h"

/**
 * list_len - prints elements of a list.
 * @h: pointer to the head of node.
 *
 * Return: size of elements in list.
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
