#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: head node
 * @index: the index of the node, starting at 0
 * Return: NULL f the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new;

	new = head;

	while (new != NULL && i != index)
	{
		i++;
		new = new->next;
	}
	if (i == index)
		return (new);

	return (NULL);
}
