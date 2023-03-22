#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: pointer to char
 * @f: pointer to function that returns nothing
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	/**
	 *the function checks if the input string "name" is NULL or empty,
	 *or if the function pointer "f" is NULL.
	 *If any of these conditions are true,
	 *the function returns without printing anything.
	 *Otherwise, the function pointer "f"
	 *is dereferenced using the asterisk (*) operator,
	 *and the function is called with the input string "name" as an argument.
	 */
	if (name == NULL || *name == '\0' || f == NULL)
	{
		return;
	}
	(*f)(name);
}
