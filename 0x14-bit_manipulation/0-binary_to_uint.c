#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x_val = 0, prod = 1;
	int count = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[count])
	{
		count++;
	}

	for (count -= 1; count >= 0; count--)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
		x_val += (b[count] - '0') * prod;
		prod *= 2;
	}

	return (x_val);
}
