#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: points to an array
 **/
int *array_range(int min, int max)
{
	int *arr;
	int len = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
