#include "main.h"
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: minimum range
 * @max: maximum range.
 *
 * Return: pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, k;

	if (min > max)
		return (NULL);

	k = max - min + 1;

	ptr = malloc(sizeof(int) * k);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
