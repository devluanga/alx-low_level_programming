#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - allocates memory using malloc
 *@b: input representing number of bytes to be allocated
 *Return: always returns 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
	/**
	 *void *p = malloc(b);
	 *if (p == NULL)
	 {
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	*return (p);
	*/
}
