#include "main.h"

/**
*void print_alphabet_x10(void) - Prints alphabets 10 times
*
*Return: always 0
*/

void print_alphabet_x10(void)
{
	int x = 0;
	char y;

	while (x < 10)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
		x++;
	}

}
