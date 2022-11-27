#include "hash_tables.h"
/**
 * hash_table_create - creates the hash table
 *
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array)
	{
		table->size = size;
		return (table);
	}
	return (NULL);
}
