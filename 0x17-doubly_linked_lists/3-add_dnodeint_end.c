#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a double linked list
 *
 * @head: head of list
 * @n: value of element
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newer;

	newer = malloc(sizeof(dlistint_t));
	if (newer == NULL)
		return (NULL);

	newer->n = n;
	newer->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newer;
	}
	else
	{
		*head = newer;
	}

	newer->prev = h;
	return (newer);
}
