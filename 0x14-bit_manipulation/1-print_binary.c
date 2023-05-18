#include <stdio.h>
#include "main.h"

/**
 *print_binary - function converts a decimal to binary
 *@n: input value to be converted
 *Return: since function is of type void no return
 */
void print_binary(unsigned long int n)
{
	unsigned long int val;

	if (n > 1)
	{
		val = n >> 1UL;
		print_binary(val);
	}
	_putchar((n & 1) + '0');
}
