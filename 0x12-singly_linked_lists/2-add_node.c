#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning
 * @head: head of the list
 * @str: string
 * Return: adress of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
	return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (new);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

