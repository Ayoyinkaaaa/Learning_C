#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * @index:  is the index, starting from 0
 * @n: number
 * Return: 1 if it worked, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
