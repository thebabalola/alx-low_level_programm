#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Function calculates the sum of all
 * 'n' values in a linked list.
 * @head: pointer to head of list.
 *
 * Return: total sum of 'n' values.
 */

int sum_listint(listint_t *head)
{
	int tolSum = 0;

	while (head != NULL)
	{
		tolSum += head->n;
		head = head->next;
	}

	return (tolSum);
}
