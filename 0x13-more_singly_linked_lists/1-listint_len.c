#include "lists.h"

/**
 * listint_len - finds number of elelments in a linked list
 * @h: head  of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
