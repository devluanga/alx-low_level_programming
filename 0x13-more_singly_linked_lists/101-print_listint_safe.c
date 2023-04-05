#include "lists.h"
#include <stdio.h>

/**
 *get_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 *@head: A pointer to the head of the listint_t to check.
 *
 *Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t get_count(const listint_t *head)
{
	const listint_t *ptr, *temp;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	ptr = head->next;
	temp = ptr->next;

	while (temp)
	{
		if (ptr == temp)
		{
			ptr = head;
			while (ptr != temp)
			{
				count++;
				ptr = ptr->next;
				temp = temp->next;
			}

			ptr = ptr->next;
			while (ptr != temp)
			{
				count++;
				ptr = ptr->next;
			}

			return (count);
		}

		ptr = ptr->next;
		temp = (temp->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, val = 0;

	count = get_count(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (val = 0; val < count; val++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
