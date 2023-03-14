#include <stdlib.h>
/**
 * *create_array - function creates an array of chars
 *@size: the size of the array to be created
 *@c: the value with which the array is to be initialized with
 *Return: returns appointer to the array and null if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *) malloc(size * sizeof(char));

	for (unsigned int x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}
