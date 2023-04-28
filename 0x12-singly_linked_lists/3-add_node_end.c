#include "lists.h"

/**
 * add_node_end - add node to end of linked list
 * @head: pointer to a pointer to the head node.
 * @str: pointer to the string
 *
 * Return: pointer to the new head of list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *down;
	int i;
	char *cp_s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cp_s = strdup(str);
	if (cp_s == NULL)
	{
		free(new);
		return (NULL);
	}

	i = 0;
	while (str[i])
	{
		i++;
	}

	new->len = i;
	new->str = cp_s;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		down = *head;
		while (down->next != NULL)
			down = down->next;
		down->next = new;
	}

	return (*head);
}
