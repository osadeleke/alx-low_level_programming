#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *node;
	unsigned long int i, size;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	size = ht->size;

	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		free(node);
	}
	free(ht->array);
	free(ht);
}
