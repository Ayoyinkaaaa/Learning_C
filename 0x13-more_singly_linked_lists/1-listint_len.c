#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

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
	size_t num = 0;

		while (h)
		{
			num++;
			h = h->next;
		}
	return (num);
}
