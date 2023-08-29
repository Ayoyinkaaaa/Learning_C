#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: head
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	new = *head;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	(*head) = (*head)->next;
	free(new);

	return (n);
}
