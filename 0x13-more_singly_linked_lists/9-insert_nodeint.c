#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node  at a given position
 * @head: head of list
 * @idx: insert node at index
 * @n: value of new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = *head;
	for (node = 0; node < idx - 1 && current != NULL; node++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)

	{
		*head = new;
		new->next = *head;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
