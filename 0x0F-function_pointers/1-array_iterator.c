#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function executes a function on array
 * @array: pointer to array
 * @size: number elements in array
 * @action: pointer to function
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/**
	 *the function checks if the input array "array" is NULL or empty,
	 *or if the function pointer "action" is NULL.
	 *If any of these conditions are true,
	 *the function returns without iterating over the array.
	 *Otherwise, the function pointer "action"
	 *is dereferenced using the asterisk (*) operator,
	 *and the function is called with each element
	 *of the input array as an argument.
	 *The for loop in this implementation uses the size_t data type
	 *to keep track of the current index of the array.
	 */
	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	for (unsigned int i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
