#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: A pointer to the head of the list_t list
 *
 * Return: the number of nodes in the list_t list
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		t++;
		h = h->next;
	}
	return (t);
}
