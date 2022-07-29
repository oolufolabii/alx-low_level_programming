#include "hash_tables.h"

/**
 * hash_table_create - creating an hash table
 * @size: size of the array of the hash table
 *
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tbl;

	if (size == 0)
		return (NULL);

	hash_tbl = malloc(sizeof(hash_table_t));
	if (!hash_tbl)
		return (NULL);

	hash_tbl->size = size;
	hash_tbl->array = calloc((size_t)hash_tbl->size, sizeof(hash_node_t *));
	if (hash_tbl->array == NULL)
		return (NULL);

	return (hash_tbl);
}
