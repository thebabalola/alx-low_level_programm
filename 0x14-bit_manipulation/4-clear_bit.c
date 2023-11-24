#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Sets value of a bit to 0 at a given index.
 * @n: Pointer to unsigned long integer.
 * @index: Index of the bit to be cleared.
 *
 * Return: 1 if successful, -1 if index is out of range.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ms;

	if (index >= 64)
		return (-1);

	ms = 1L << index;

	if (*n & ms)
		*n ^= ms;

	return (1);
}
