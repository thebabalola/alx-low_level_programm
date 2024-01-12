#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a doubly linked list
 *
 * @head: head of list
 * @index: index of new node
 *
 * Return: 1 if successful, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hOne, *hTwo;
	unsigned int i;

	hOne = *head;

	if (hOne != NULL)
		while (hOne->prev != NULL)
			hOne = hOne->prev;

	i = 0;

	while (hOne != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = hOne->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hTwo->next = hOne->next;

				if (hOne->next != NULL)
					hOne->next->prev = hTwo;
			}

			free(hOne);
			return (1);
		}
		hTwo = hOne;
		hOne = hOne->next;
		i++;
	}
	return (-1);
}
