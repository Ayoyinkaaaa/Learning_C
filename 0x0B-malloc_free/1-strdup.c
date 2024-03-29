#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a new string.
 * @str: the string.
 *
 * Return: NULL or a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
