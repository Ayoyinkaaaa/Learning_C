#include "main.h"

/**
 *  _strlen_recursion - Return the length of the string.
 * @s: The string to be measured
 *
 * Return: string length.
 *
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
