#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _create_dlist - Create a list
 *
 * @n: Number of elements
 *
 * Return: A pointer to the first element of the created list
 */
dlistint_t *_create_dlist(unsigned int n, ...)
{
	va_list args;
	dlistint_t *list;
	dlistint_t *tmp;
	dlistint_t *prev;
	unsigned int i;
	int nb;

	va_start(args, n);
	prev = tmp = list = NULL;
	i = 0;
	while (i < n)
	{
		nb = va_arg(args, int);
		tmp = malloc(sizeof(*tmp));
		if (!tmp)
			return (NULL);
		tmp->n = nb;
		tmp->next = NULL;
		tmp->prev = prev;
		if (!list)
			list = tmp;
		if (prev)
			prev->next = tmp;
		prev = tmp;
		++i;
	}
	va_end(args);
	return (list);
}

/**
 * _free_dlistint - Free a list
 *
 * @list: A pointer to the first element of a list to free
 */
void _free_dlistint(dlistint_t *list)
{
	if (list)
	{
		_free_dlistint(list->next);
		free(list);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t *head;
	int r;
	size_t n;

	head = _create_dlist(2, -12, 6);
	r = delete_dnodeint_at_index(&head, 1);
	printf("-> %d\n", r);
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	/*n = _print_dlistint_backward(head);
	printf("-> %lu elements\n", n);*/
	_free_dlistint(head);
	return (0);
}
