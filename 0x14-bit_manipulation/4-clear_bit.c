#include "main.h"
#include <stdio.h>
/**
 *clear_bit - function sets a value of a bit to 0
 *@n: pointer to the long int to be modified
 *@index: position of the bit to be set
 *Return: if bit is set to 0 it returns 1 and -1 if error
 *		occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int numBits = sizeof(unsigned long int) * 8;
	unsigned long int val = 1UL << index;

	if (index >= numBits)
		return (-1);

	val  = ~(val);

	*n = *n & val;

	return (1);
}
