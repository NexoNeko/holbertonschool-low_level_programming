#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 *
 * @key: value to hash
 * @size: size of the array to store
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int nuKy = hash_djb2(key);

	return (nuKy % size);
}
