#include "main.h"

/**
 * flip_bits - a function that returns the number.
 * @n: first integar
 * @m: second integar
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b;
	unsigned long int i = 0;

	b = n ^ m;

	for (i = 0; b != 0; i += 1)
		b &= (b - 1);
	return (i);
}
