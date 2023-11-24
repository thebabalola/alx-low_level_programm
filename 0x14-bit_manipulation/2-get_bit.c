#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns value of bit at a given index.
 * @n: unsigned long int input.
 * @index: index of bit.
 *
 * Return: value of the bit at the given index, or -1 if index is out of bounds.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n >>= index;
	return (n & 1);
}
