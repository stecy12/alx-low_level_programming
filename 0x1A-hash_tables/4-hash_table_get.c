#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - get a hash table
 * @ht: hash table
 * @key: key
 * Return: return hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *traverse;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	traverse = ht->array[index];
	while (traverse != NULL)
	{
		if (strcmp(traverse->key, key) == 0)
		{
			return (traverse->value);
		}
		traverse = traverse->next;
	}
	return (NULL);
}
