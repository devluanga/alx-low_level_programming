#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	int x, sum = 0;

	/*check if there value provided for argc is 0*/
	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < argc; x++)
		int y = 0;
	{
		while (argv[x][y])
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		/*use atoi()to convert values to integers*/
		sum += atoi(argv[x]);
	}
	return (0);
}
