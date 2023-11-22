#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Deallocates memory for all nodes in a linked list.
 * @head: The head pointer of the linked list.
 *
 * Description: Function that frees all nodes of a linked list.
 * Return: no return as return type is void.
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
}
