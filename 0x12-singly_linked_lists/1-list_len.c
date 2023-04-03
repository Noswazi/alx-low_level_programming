#include "lists.h"

/**
 * list_len - finds elements in linked list_t list
 * @h: linked list_t list
 * Return: elements found in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
