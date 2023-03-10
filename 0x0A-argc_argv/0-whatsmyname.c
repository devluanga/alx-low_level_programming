#include <stdio.h>
/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	char *program_name = strrchr(argv[0], '/');

	if (program_name == NULL)
	{
		program_name = argv[0];
	}
	else
	{
		program_name++;
	}
	printf("%s\n", program_name);
	return (0);
}
