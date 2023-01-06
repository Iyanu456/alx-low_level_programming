#include "hash_tables.h"

/**
 * hash_table_create: creates an hash_table
 * @size: size of hash_table
 * return: pointer to hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	hash_table->size = size;
	return (hash_table);
}
