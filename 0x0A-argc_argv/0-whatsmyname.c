#include <stdio.h>
/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char argv[])
{
	char *programe_name;

	programe_name = argv[0];
	printf("%s\n", programe_name);
	return (0);
}
