#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node
 * @head: head
 * @n: integar of new node
 * Return: adress of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
