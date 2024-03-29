#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
