#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -a function given as a parameter on each element of an array.
 * @size: the size of the array
 * @array: array pointer
 * @action: is a pointer to the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
