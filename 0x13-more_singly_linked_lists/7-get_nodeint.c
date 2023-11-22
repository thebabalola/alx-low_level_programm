#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a listint_t linked list.
 * @head: Pointer to head of linked list.
 * @index: Index of node, which starts at 0.
 *
 * Return: the node at the given index or NULL if not found.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index && head != NULL)
	{
		head = head->next;
		count++;
	}

	return (head);
}
