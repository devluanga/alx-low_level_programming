#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *str = malloc(size + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	*(str + size) = '\0';
	return (str);
}
