#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * to get from one num to another
 * @n: number 1(one).
 * @m: number 2(two).
 *
 * Return: number of differing bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diffs = n ^ m;
	unsigned int nbits = 0;

	while (diffs)
	{
		nbits++;
		diffs &= (diffs - 1);
	}

	return (nbits);
}
