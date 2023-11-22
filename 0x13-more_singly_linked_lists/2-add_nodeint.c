#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Inserts new node at the beginning of a linked list.
 * @head: The reference to the head pointer of the linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL if allocation fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNodes = malloc(sizeof(listint_t));
	/**
	 * Allocate memory for new nodes.
	 * And check if memory allocation fails.
	 * Then set data and next pointer of new node.
	 * Return address of newly added node
	 */

	if (newNodes == NULL)
		return (NULL);

	newNodes->n = n;
	newNodes->next = *head;
	*head = newNodes;

	return (newNodes);
}
