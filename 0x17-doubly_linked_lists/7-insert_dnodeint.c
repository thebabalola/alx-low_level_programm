#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 *
 * @h: head of list
 * @idx: index of new node
 * @n: value of new node
 *
 * Return: address of new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newer, *head;
	unsigned int i;

	newer = NULL;
	if (idx == 0)
		newer = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;

		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					newer = add_dnodeint_end(h, n);
				else
				{
					newer = malloc(sizeof(dlistint_t));

					if (newer != NULL)
					{
						newer->n = n;
						newer->next = head->next;
						newer->prev = head;
						head->next->prev = newer;
						head->next = newer;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (newer);
}
