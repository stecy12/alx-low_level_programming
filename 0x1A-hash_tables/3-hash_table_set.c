#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - add to hash table
 * @ht: hash table
 * @key: the key
 * @value: the value
 * Return: 1 if succeeded or 0 if it is not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *c;
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	c = ht->array[index];
	if (c != NULL)
	{
		node->next = c;
		ht->array[index] = node;
		return (1);
	}
	ht->array[index] = node;
	node->next = NULL;
	return (1);
}
