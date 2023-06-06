#include <stdlib.h>
#include "lists.h"

/**
 * lisint_len - prints all the elements in the listint_t list.
 *
 * @h: a pinter to the head nodes.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
