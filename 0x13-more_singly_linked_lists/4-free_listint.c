#include <stdio.h>
#include "lists.h"
/**
 *free_listint - function deletes the entire list
 *@head: points to the head
 *Return: returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = malloc(sizeof(listint_t));

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	/*return (head);*/
}

