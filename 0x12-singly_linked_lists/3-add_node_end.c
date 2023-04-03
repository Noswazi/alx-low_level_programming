#include "lists.h"
/**
 * add_node_end - adds new node 
 * @str: string to be stored to list_t list
 * @head: head of list
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		       temp = temp->next;
		{
			temp->next = new;
		}
	}
	return (new);
}
