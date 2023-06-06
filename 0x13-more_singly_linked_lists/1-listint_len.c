#include <stdlib.h>
#include "lists.h"

/**
 * list_intlen - prints all the elements in the listint_t list.
 *
 * @h: a pinter to the head nodes.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
