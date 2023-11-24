#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index.
 * @n: pointer to unsigned long int.
 * @index: index of the bit to set.
 *
 * Return: 1 if successful, -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n |= (1L << index);

	return (1);
}
