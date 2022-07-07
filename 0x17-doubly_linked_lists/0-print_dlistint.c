#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 * @h: the head of doubly linked listt
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *traverse = h;
	int n = 0;

	while (traverse != NULL)
	{
		printf("%d\n", traverse->n);
		n++;
		traverse = traverse->next;
	}
	return (n);
}
