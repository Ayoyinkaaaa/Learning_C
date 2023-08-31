#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return:  the converted number
 * Description: print all argument received.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum = sum << 1;

		if (b[i] == '1')
			sum = sum | 1;
		i++;
	}
	return (sum);
}
