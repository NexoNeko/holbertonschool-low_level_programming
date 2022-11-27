#include "hash_tables.h"
/**
 * hash_table_delete - delete table
 * @ht: pointer to hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node = NULL, *nexNode = NULL;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			nexNode = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = nexNode;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
