#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create -Function that creates a hash table
 * @size: Size of the array
 * Return: Pointer to the new Hash table created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHt;

	newHt = malloc(sizeof(hash_table_t));

	if (newHt == NULL)
		return (NULL);

	newHt->size = size;
	newHt->array = calloc(size, sizeof(hash_node_t *));
	if (newHt->array == NULL)
	{
		free(newHt);
		return (NULL);
	}
	return (newHt);
}
