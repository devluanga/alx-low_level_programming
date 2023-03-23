#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - printsstrings followed by a new line
 * @separator: seperators
 * @n: number of arguements
 *
 *int main()
 *{
 *print_strings(", ", 4, "one", "two", "three", "four");
 *print_strings(NULL, 3, "apple", "banana", NULL);
 *return 0;
 *}
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/**
	 *This code defines a variadic function in C
	 *that prints a sequence of strings, separated by a given separator string.
	 */
	va_list strings;
	unsigned int i;
	char *ptr;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
