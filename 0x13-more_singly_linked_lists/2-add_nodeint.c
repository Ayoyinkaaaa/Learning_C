#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_list
 *
 * @head: head node
 *
 * @n: integar value
 *
 * Return: pointer to a new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
