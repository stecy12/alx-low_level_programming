#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - length of list
 * @h: head of the lsit
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *traverse = h;
	int n = 0;

	while (traverse != NULL)
	{
		n++;
		traverse = traverse->next;
	}
	return (n);
}
