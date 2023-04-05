#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index of the list where node is to be deleted
 *
 * Return: 1 if success, -1 if error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *copy;

	copy = *head;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
