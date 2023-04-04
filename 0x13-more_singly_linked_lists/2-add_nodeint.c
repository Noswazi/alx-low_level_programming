#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: head of list
 * @n: value to be stored in new node
 *
 * Return: address of new node or NULL if error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
