#include "lists.h"

/**
 * free_listint - function that free a listint_t list
 *
 * @head: check parameters
 *
 * return: check code
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
