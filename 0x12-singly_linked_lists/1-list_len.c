#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: head
 *
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
