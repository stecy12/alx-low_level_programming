#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * key_index - a function that create a key index
 * @key: the key
 * @size: the size of the array
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int s;

	s = hash_djb2(key) % size;
	return (s);
}
