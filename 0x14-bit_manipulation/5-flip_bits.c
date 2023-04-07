#include <stdio.h>
#include "main.h"
/**
 *flip_bits - function counts number of bits to flip
 *@n: integer 1
 *@m: second integer to move to
 *Return: returns the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count  = 0;

	unsigned long int val = n ^ m;

	while (val > 0)
	{
		count = count + (val & 1);
		val >>= 1;
	}
	return (count);
}
