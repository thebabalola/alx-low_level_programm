#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list
 *
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counts = 0;

	if (h == NULL)
		return (counts);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counts++;
		h = h->next;
	}
	return (counts);
}
