#include <stdio.h>
/**
* main - entry block
* @void: no argument
* Return: 0 Success
*/
int main(void)
{
	int i;

	for ((i % 3) == 0 && (i % 5) == 0)
		if (i % 45 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
