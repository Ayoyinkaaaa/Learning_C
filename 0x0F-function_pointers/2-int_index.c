#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index- returns the index of the first element
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * @array: array
 * return:0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array == NULL || cmp == NULL)
	return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) !=0)
			return (i);
	}
	return (-1);
}
