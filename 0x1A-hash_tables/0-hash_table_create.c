#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of the hash table
 * Return: pointer to a newly created hash table or NULL if not.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		new_table->size = 0;
		new_table->array = NULL;
	}

	return (new_table);
}
