#include "lists.h"
/**
 * add_nodeint_end - add new node at the end
 * @head: head of list
 * @n: value to be stored in new node
 *
 * Return: address of new node NULL if error
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	(void)end;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	end = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
		while (end->next != NULL)

			end = end->next;
	end->next = new;

	return (*head);
}
