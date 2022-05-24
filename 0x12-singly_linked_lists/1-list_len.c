#include "lists.h"
/**
 * list_len - print the linked list element
 * @h: the head of linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *traverse = h;

	while (traverse != NULL)
	{
		traverse = traverse->next;
		i++;
	}
	return (i);
}
