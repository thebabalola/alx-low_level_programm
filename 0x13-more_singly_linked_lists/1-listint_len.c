#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Determines number of elements in a linked list.
 * @h: The head pointer of the linked list.
 *
 * Return: Number of nodes in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	/* Traverses list using a for loop */
	for (; h != NULL; h = h->next)
	{
		nodeCount++;
	}

		return (nodeCount);
}
