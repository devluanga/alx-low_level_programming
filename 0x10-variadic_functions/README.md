In C, a variadic function is a function that can accept a variable number of arguments of different types.
The stdarg.h header file provides facilities to implement variadic functions.

Here is an example of a variadic function that calculates the sum of an arbitrary number of integers:

	#include <stdarg.h>

	int sum(int count, ...)
	{
   		int sum = 0;
    		va_list args;
    		va_start(args, count);
    		for (int i = 0; i < count; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return sum;
	}

The sum function takes an integer count as its first argument,
which specifies the number of additional arguments that will be passed to the function.
The va_list type represents a list of arguments, and is used to iterate over the variable argument list using the va_arg macro.
The va_start macro initializes the va_list argument list, and va_end finalizes it.

Here's an example of how to use the sum function:

	int main()
	{
		int total = sum(3, 1, 2, 3); // total is 6
		return 0;
	}

Note that the number of arguments passed to a variadic function must be determined at runtime,
so it's important to use the count argument to ensure that the function doesn't attempt to read past the end of the argument list.
