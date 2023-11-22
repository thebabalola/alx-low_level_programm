#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list.
 * @h: The head pointer of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	/* Traverse list until end is reached */
	for (; h != NULL; h = h->next, nodeCount++)
	{
		printf("%d\n", h->n);
	}

	return (nodeCount);
}
