#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - this function allocates memory to an array
 * @nmemb: number of elements to allocate memory
 * @size: bytes that are to be allocated
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

