#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *  int_index - a function that searches for an integer
 *  @array: an array
 *  @size: size of array
 *  @cmp: a pointer to the function to be used to compare values
 *
 *  Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
