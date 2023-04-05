#include "lists.h"

/**
 * get_nodeint_at_index - returns node of listint_t list
 * @head: head of list
 * @index: index of node
 *
 * Return: returns node if it exists  or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
