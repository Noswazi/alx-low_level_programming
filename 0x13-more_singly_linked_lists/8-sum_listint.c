#include "lists.h"

/**
 * sum_listint - finds sum of all data of listint_t
 * @head: head of list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
