#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - function that converts binary number to an unsigned int
 * @b: the binary string.
 *
 * Return: to return unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uis = 0;

	if (!b)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		uis = (uis << 1) | (*b - '0');
	}

	return (uis);
}
