#include "hash_tables.h"
/**
 * hash_table_set - inserts a value on a hash table
 *
 * @key: key for index
 * @value: value to store
 * @ht: node of a hash table to operate on
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *nuNode, *olNode;

	if (!ht || !key)
		return (0);

	idx = key_index(key, ht->size);

	olNode = ht->array[idx];

	if (olNode && strcmp(olNode->key, key) == 0)
		olNode->value = strdup(value);
	else
	{
		nuNode = malloc(sizeof(hash_node_t));
		if (!nuNode)
			return (0);

		nuNode->key = strdup(key);
		nuNode->value = strdup(value);

		if (!ht->array[idx])
		{
			ht->array[idx] = nuNode;
			nuNode->next = NULL;
			return (1);
		}
		nuNode->next = olNode;
		ht->array[idx] = nuNode;
	}
	return (1);
}
