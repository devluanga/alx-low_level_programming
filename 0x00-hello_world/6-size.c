#include <stdio.h>

/**
 * main - program entry
 * Return: always 0
 */


int main(void)
{
	printf("Size of Int type: %2d bytes\n", sizeof(int));
	printf("Size of long Int type: %2d bytes\n", sizeof(long int));
	printf("Size of float type: %2d bytes\n", sizeof(float));
	printf("Size of double type: %2d bytes\n", sizeof(double));
	printf("Size of long double  type: %2d bytes\n", sizeof(long double));
	printf("Size of char type: %2d bytes\n", sizeof(char));
	return (0);
	
}
