#include "hash_tables.h"

/**
 * key_val - set key value on node
 * @node: pointer to node
 * @key: the key
 * @value: the value
 *
 * Return: pointer to node
 */
hash_node_t *key_val(hash_node_t *node, const char *key, const char *value)
{
	hash_node_t *tmp;

	if (node == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (NULL);

		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
	}
	else
	{
		tmp = malloc(sizeof(hash_node_t));
		if (tmp == NULL)
			return (NULL);
		tmp->key = (char *)key;
		tmp->value = (char *)value;
		tmp->next = node;
		node = tmp;
	}
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key.
 * @value: value associated with key.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *key_u;
	unsigned long int index;

	key_u = (const unsigned char *) key;

	index = hash_djb2(key_u) % ht->size;

	if (key_val(ht->array[index], key, value) == NULL)
		return (0);

	ht->array[index] = key_val(ht->array[index], key, value);
	return (1);
}
