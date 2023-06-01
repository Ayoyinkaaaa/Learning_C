#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

			if (new_node == NULL)
			{
				return (NULL);
			}

			new_node->str = strdup(str);
			if (new_node->str == NULL)
			{
				free(new_node);
				return (NULL);
			}
			new_node->len = _strlen(str);
			new_node->next = *head;
			*head = new_node;

			return (*head);
}



/**
 * _strlen - function to calculate the length of the string
 *
 * @s: string to use
 *
 * Return: length of the string
 *
 */
int _strlen(const char *s)
{
        unsigned int i;

        for (i = 0; s[i] != '\0'; i++)
        {
        }
        return (i);
}
