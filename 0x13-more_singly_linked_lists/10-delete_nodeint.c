#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp2 = *head;
	unsigned int data;

	if (temp2 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp2);
		return (1);
	}

	for (data = 0; data < (index - 1); data++)
	{
		if (temp2->next == NULL)
			return (-1);

		temp2 = temp2->next;
	}

	temp = temp2->next;
	temp2->next = temp->next;
	free(temp);
	return (1);
}
