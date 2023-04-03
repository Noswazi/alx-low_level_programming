#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node at the beginning
 * of a list_t list
 * @head: head of list
 * @str: string to be stored in list
 * Return: elements of the str
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
