#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: head.
 * Return: check code.
 */
void free_listint(listint_t *head)
{
	listint_t *node = head;

	while (node != NULL)
	{
		head = head->next;
		free(node);
	}
}


