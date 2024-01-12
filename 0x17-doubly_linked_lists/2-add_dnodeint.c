#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double linked list
 *
 * @head: head of list
 * @n: value of element
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newer;
	dlistint_t *h;

	newer = malloc(sizeof(dlistint_t));
	if (newer == NULL)
		return (NULL);

	newer->n = n;
	newer->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	newer->next = h;

	if (h != NULL)
		h->prev = newer;

	*head = newer;
	return (newer);
}
