#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function which frees a linked list.
 * @head: Head of the linked list.
 *
 * Return: No return.
 */

void free_list(list_t *head)
{
	list_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present->str);
		free(present);
	}
}
