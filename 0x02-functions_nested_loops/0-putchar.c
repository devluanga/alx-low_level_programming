#include "main.h"

/**
* main - Entry
*print "_putchar"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char p = ["_", "p", "u", "t", "c", "h", "a", "r"];

	for (i = 0; i < 9; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}
