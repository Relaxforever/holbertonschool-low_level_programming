#include "hash_tables.h"
/**
*hash_table_create - creates a hash table
*@size: the size of the array
*Return: the pointer or NUll if malloc fails
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *init_hash;

	init_hash = malloc(sizeof(hash_table_t));
	if (init_hash == NULL)
		return (NULL);

	init_hash->array = NULL;
	init_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (init_hash->array == NULL)
	{
		free(init_hash);
		return (NULL);
	}
	init_hash->size = size;
	return (init_hash);
}
