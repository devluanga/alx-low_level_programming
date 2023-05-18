#include "main.h"
#include <stdio.h>
/**
 *set_bit - function stes a bit to a given position
 *@n: points to the int to be modified
 *@index: position for modification
 *Return: returns 1 if succesful
 *		-1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int numBits = sizeof(unsigned long int) * 8;
	unsigned long int val;

	if (index >= numBits)
		return (-1);
	val = 1UL << index;

	/*we'll use OR to set bit to 1*/
	*n |= val;

	return (1);
}
