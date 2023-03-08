#include "main.h"
/**
 * _strlen_recursion - finds the length of a string.
 * @s: pointer to string
 * Return: length of string
 **/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
