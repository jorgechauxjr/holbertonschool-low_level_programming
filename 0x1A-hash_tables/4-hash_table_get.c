#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht:is the hash table you want to look into.
 * @key:is the key you are looking for.
 * Return:value associated with the element, or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	if (tmp == NULL)
		return (NULL);

	while (strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
