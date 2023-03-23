#include "variadic_functions.h"
#include <stdio.h>
/**
 *  print_numbers - prints out numbers given
 * @separator: string to be seperated between numbers
 * @n: number of arguements
 * Return: nothing
 *
 *test main
 *
 *int main()
 *{
 *   print_numbers(", ", 4, 1, 2, 3, 4); // prints "1, 2, 3, 4\n"
 *   print_numbers(NULL, 3, 5, 6, 7); // prints "5 6 7\n"
 *   return 0;
 *}
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/**
	 *This code defines a variadic function in C
	 *that prints a sequence of integers, separated by a given separator string.
	 */
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
