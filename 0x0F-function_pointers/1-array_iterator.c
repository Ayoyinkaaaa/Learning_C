#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator: print each array elements
 * @action: pointer assigned.
 * @array: input array
 * @size: size of the elements
 * return: 0 success
 * description: print all arguments received
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
