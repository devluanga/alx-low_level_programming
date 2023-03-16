#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, result_len;

	/* Handle NULL input strings*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Get the lengths of the input strings*/
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	/* Determine the length of the resulting string*/
	if (n >= s2_len)
	{
		result_len = s1_len + s2_len;
	}
	else
	{
		result_len = s1_len + n;
	}
	/* Allocate memory for the resulting string*/
	result = malloc(result_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	/* Copy the input strings to the resulting string*/
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, result_len - s1_len);
	result[result_len] = '\0';
	return (result);
}

