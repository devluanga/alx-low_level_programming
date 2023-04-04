#include <stdio.h>
#include "lists.h"
/**
 *free_listint2 - function deletes the last node
 *	of the linked list
 *@head: points to the pointer of the first node
 *Return: returns pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *temp;

	while (ptr != NULL)
	{
		temp = ptr;
		temp = temp->next;
	}
	ptr->next = NULL;
	free(temp);
	temp = NULL;
	/*return (ptr);*/

}
