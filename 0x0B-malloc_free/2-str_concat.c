#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	char *concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (size_t i = 0; i < s1_len; i++)
	{
		concat_str[i] = s1[i];
	}
	for (size_t i = 0; i < s2_len; i++)
	{
		concat_str[s1_len + i] = s2[i];
	}
	concat_str[s1_len + s2_len] = '\0';
	return (concat_str);
}
