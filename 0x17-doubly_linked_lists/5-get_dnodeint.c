#include "lists.h"

/**
 * get_dnodeint_at_index - returns the n'th node of a double linked list
 *
 * @head: head of list
 * @index: index of n'th node
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	n = 0;

	while (head != NULL)
	{
		if (n == index)
			break;
		head = head->next;
		n++;
	}
	return (head);
}
