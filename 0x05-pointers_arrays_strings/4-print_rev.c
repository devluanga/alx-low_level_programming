#include "main.h"
/**
 * print_rev - toma la cadena de la funcion.
 * @s: value taken from main
 * Return: (0)
 */
void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (count = count - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
