#include "main.h"

/**
 * _memset - Fills block of memory with a specific byte.
 *
 * @s: Pointer to the memory area.
 * @b: The byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the filled memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		s[i] = b; /* Fill memory directly using array indexing */
	}

	/* Return the pointer to the filled memory.*/
	return (s);
}
