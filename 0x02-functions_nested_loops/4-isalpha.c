#include "main.h"
/**
* _isalpha - Shows 1 if the input is c
* letter Another cases, shows 0
*
* @c: To be checked
*
* Return: 1 for letters. Returns 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
