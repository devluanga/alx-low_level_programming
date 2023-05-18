#include <stdio.h>
#include "lists.h"
/**
 *sum_listint - functions finds the sum of all data (n)
 *	in the linked list
 *@head: points to the head
 *Return: returns 0 if list is empty and sum otherwise
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
