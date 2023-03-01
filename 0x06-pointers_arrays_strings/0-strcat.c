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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
