#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints all the elements in the list_t list
 *
 * @h: a pointer to the hread of nodes in the list_t list
 *
 * Return: number of nodes
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
