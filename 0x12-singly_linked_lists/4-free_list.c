#include "lists.h"

/**
 * free_list - free a list.
 * @head: pointer to the head of node.
 */

void free_list(list_t *head)
{
	list_t *new;
	list_t *ran;

	new = head;

	while (new != NULL)
	{
		ran = new->next;
		free(new->str);
		free(new);
		new = ran;
	}
}
