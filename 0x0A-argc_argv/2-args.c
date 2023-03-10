#include <stdio.h>
/**
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x <= argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
