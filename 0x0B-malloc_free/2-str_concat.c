#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: NULL on failure, new string pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new_str = malloc(strlen(s1) + strlen(s2) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);

	return (new_str);
}
