#include "lists.h"

/**
 * pop_listint - function that deletes tthe node
 *
 * @head: head node
 *
 * Return: check the code.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = temp->next;
	num = temp->n;

		free(temp);
		return (num);
}
