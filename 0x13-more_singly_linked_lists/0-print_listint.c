#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the element in the list_int list
 *
 * @h: check the parameters.
 *
 * Return: the number of nodes.
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
