#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints all the elements in the listint_t list.
 *
 * @h: a pinter to the head nodes.
 *
 * description: print all arguments received.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *temp = h;

	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}
	return (n);
}
