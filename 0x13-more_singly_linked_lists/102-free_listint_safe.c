#include "lists.h"
#include <stdio.h>

/**
 *get_val - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 *@head: A pointer to the head of the listint_t to check.
 *
 *Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t get_val(const listint_t *head)
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
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t val, count;

	val = get_val(*h);

	if (val == 0)
	{
		for (; h != NULL && *h != NULL; val++)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
		}
	}

	else
	{
		for (count = 0; count < val; count++)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
		}

		*h = NULL;
	}

	h = NULL;

	return (val);
}
