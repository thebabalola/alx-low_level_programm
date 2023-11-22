#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Deallocates memory for all nodes in a linked list.
 * @head: The head pointer of the linked list.
 *
 * Description: Function makes sure there is no memory leaks.
 * Return: No return as return type is void.
 */

void free_listint2(listint_t **head)
{
		if (*head == NULL)
		{
			return;
		}

		while (*head != NULL)
		{
			listint_t *tempNode = *head;
			*head = (*head)->next;
			free(tempNode);
		}
}
