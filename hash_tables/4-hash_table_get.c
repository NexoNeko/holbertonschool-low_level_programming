#include "hash_tables.h"
/**
 * hash_table_get - get a value of a key
 *
 * @ht: hash table to operate on
 * @key: key for index
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	const unsigned char *newKey = (unsigned char *)key;
	hash_node_t *crrNde = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index(newKey, ht->size);
	crrNde = ht->array[index];

	while (crrNde)
	{
		if (strcmp(crrNde->key, key) == 0)
		{
			return (crrNde->value);
		}
		crrNde = crrNde->next;
	}

	return (NULL);
}
