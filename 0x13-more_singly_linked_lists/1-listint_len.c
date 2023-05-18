#include <stdio.h>
#include "lists.h"
/**
 *listint_len - function counts all the elements in a linked list
 *@h: pointer to the linked list head
 *Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
