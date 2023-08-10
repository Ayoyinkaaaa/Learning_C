#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate.
 * @n: unsigned integar
 *
 * Return: NULL if it fails or the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int len_s1, len_s2;

	unsigned int concat_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		concat_len = len_s1 + len_s2;
	}
	else
		concat_len = len_s1 + n;

	str_concat = malloc(concat_len + 1);

	if (str_concat == NULL)
	{
		return (NULL);
	}
	memcpy(str_concat, s1, len_s1);
	memcpy(str_concat + len_s1, s2, concat_len - len_s1);

	str_concat[concat_len] = '\0';
	return (str_concat);
}
