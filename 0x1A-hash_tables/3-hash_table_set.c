#include "hash_tables.h"
/**
 * hash_table_set -function that adds an element to the hash table
 * @ht: hash table to add or update key/value
 * @key: key. Can not be empty string
 * @value: val associated with the key. must be duplicated
 * and can be an empty string
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	if (ht->array[index] != NULL)
		newNode->next = ht->array[index];

	ht->array[index] = newNode;
	return (1);
}
