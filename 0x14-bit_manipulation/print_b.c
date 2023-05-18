#include <stdio.h>
#include "main.h"

/**
 *print_binary - function converts decimal to binary
 *@n: decimal to be converted
 *Return: since function is of type void no return value
 */

void print_binary(unsigned long int n)
{
	int numBit = sizeof(n) * 8;
	unsigned long int val = 1UL << (numBit - 1);

	while (val > 0)
	{
		if (val & n)
			_putchar('1');
		else
			_putchar('0');
		val >>= 1;
	}
	_putchar('\n');
}
