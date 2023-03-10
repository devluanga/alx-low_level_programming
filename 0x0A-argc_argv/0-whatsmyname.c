#include <stdio.h>
/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	char *program_name;

	program_name = argv[0];
	printf("%s\n", program_name);
	return (0);
}
