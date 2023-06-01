#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

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

	new = malloc(sizeof(list_t);

			if (new == NULL)
				return (NULL);

			new->str = strdup(str);
			if (new->str == NULL)
			{
				free(new_node);
				return (NULL);
			}
			new->len = strlen(str)
			new->next = *head;
			*head = new;

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
int_strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
