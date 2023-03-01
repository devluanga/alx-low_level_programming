#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *str)
{
	int x = 0, y;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (str[x] == leet[y] ||
			    str[x] - 32 == leet[y])
				str[x] = y + '0';
		}

		x++;
	}

	return (str);
}
