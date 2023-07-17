#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size, check;
	hash_node_t *node;

	if (ht == NULL)
		return;
	check = 0;
	size = ht->size;
	while (!ht->array[check])
	{
		check++;
	}
	if (check > size)
		return;
	node = ht->array[check];
	printf("{'%s': '%s'", node->key, node->value);
	node = node->next;
	while (node)
	{
		printf(", '%s': '%s'", node->key, node->value);
		node = node->next;
	}
	for (i = check + 1; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
