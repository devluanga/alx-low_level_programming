#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *print_listint - function prints all the elements
 *of the linkedlist listin_t
 *@h: pointer to head
 *Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/*listint_t *head = h;*/
	int count = 0;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		count++;
		h = h->next;
	}
	printf("\n");
	return (count);
}
