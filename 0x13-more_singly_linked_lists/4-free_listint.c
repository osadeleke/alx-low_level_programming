#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: pointer to the first node on the list
 */

void free_listint(listint_t *head)
{
	listint_t *c_node = head;
	listint_t *n_node;

	/** check if last node **/
	while (c_node != NULL)
	{
		/** copy address of next node to pointer **/
		n_node = c_node->next;

		/** free current node **/
		free(c_node);

		/** make the next node pointer the current node **/
		c_node = n_node;
	}
}
