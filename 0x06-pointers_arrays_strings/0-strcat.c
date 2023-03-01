#include "main.h"

/**
 *_strcat - function concatenates str1 and str2
 *
 *@*dest point to the first string
 *@*src pointer to the second string
 *
 *Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int x, y, count = 0;

	for (x = 0; dest[x] != '\0'; x++)
	{
		count++;
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[count] = src[y];
		count++
	}
	dest[count] = '\0';
	return (dest);

}
