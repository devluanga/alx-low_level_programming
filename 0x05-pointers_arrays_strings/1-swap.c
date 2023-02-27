#include<stdio.h>
#include "main.h"
/**
*swap_int - swaps the values of two integers.
*@a: value to be swapped.
*@b: value to be swapped.
*Return: not.
*/
void swap_int(int *a, int *b)
{

	*a = (*b + *a);
	*b = (*b + *a) - *b;
	*a = (*b + *a) - *a;
}
