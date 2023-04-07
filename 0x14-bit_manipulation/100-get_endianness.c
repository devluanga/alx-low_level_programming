#include <stdio.h>
#include "main.h"
/**
 *get_endianness - the functions checks for endianness
 *		1 represents little endian
 *		0 represents big endian
 *Return: depends on outcome 1 or 0
 */
int get_endianness(void)
{
	int val = 1;
	char *temp = (char *) &val;

	/**
	 *so if the bite is 1 we conclude its little endian
	 *otherwise its big endian
	 */

	if (*temp == 1)
		return (1);
	else
		return (0);
}
