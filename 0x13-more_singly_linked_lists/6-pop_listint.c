#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to the head of a list.
 *
 * Return: data of the deleted head node.
 */

int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	head_data = (*head)->n;
	next_node = (*head)->next;

	free(*head);
	*head = next_node;

	return (head_data);
}
