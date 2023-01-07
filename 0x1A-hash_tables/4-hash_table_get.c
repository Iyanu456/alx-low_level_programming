#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash item
 * @key: key to be hashed
 * Description: retrieves a value associated with a key
 * Return: char on success or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	for(; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
