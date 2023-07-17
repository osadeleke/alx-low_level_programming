#include "hash_tables.h"

/**
 * key_checker - checks node list for key
 * @node: node to check
 * @key: key to find
 *
 * Return: value if key found or NULL
 */
char *key_checker(hash_node_t *node, const char *key)
{
	hash_node_t *tmp;

	tmp = node;
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hashtable to look into
 * @key: key you are looking for
 *
 * Return: value associated with the element or NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *key_u;

	if (ht == NULL)
		return (NULL);

	key_u = (const unsigned char *) key;

	index = hash_djb2(key_u) % ht->size;

	if (ht->array[index] == NULL)
		return (NULL);

	return (key_checker(ht->array[index], key));
}
