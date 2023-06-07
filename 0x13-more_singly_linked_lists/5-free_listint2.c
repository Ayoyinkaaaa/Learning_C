#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: check parameters.
 *
 * Return: check the code.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempvalue;

	if (head == NULL)
		return;

	while (*head)
	{
		tempvalue = (*head)->next;
		free(*head);
		*head = tempvalue;
	}
	*head = NULL;
}
