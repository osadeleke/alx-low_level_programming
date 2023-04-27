#include "list.h"

/**
 * print_list - prints elements of a list.
 * @h: pointer to the head of node.
 *
 * Return: size of elements in list.
 */

size_t print_list(const list_t *h)
{
	int n;

	if (h == NULL)
		return (-1);

	n = 1;
	if (h->next == NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[i] ", h->len);
			printf("%s\n", h->str);
		}
		n++;
		return (n);
	}
	else if (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[i] ", h->len);
			printf("%s\n", h->str);
		}
		n++;
		h = h->next;
		print_list(h);
	}
	return (n);
}
