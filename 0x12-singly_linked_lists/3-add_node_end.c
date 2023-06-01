#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * aad_node_end - adds a new node to the end of a list_t list
 *
 * @head: pointer to the end of the list
 *
 * @str: string to be stored in a new mode
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str

