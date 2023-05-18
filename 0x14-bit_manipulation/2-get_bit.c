#include "main.h"
#include <stdio.h>
/**
 *get_bit - function prints bits at a given position
 *@n: unsigned long int to get the bit from
 *@index: position of the bit we need to return
 *
 *Return: bit at a given position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*number of bits for unsigned long*/
	unsigned int numBits = sizeof(unsigned long int) * 8;

	/*then we check if index is out of bound*/
	if (index >= numBits)
		return (-1);
	/*unsigned int val = 1U << index;*/

	if ((n & (1U << index)) == 0)
		return (0);
	return (1);
}
