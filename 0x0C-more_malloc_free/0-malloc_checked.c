#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory and checks for success.
 * @b: Number of bytes to allocate.
 *
 * Return: pointer to the allocated memory.
 * If `malloc` fails, program exits with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	char *ptrs;

	ptrs = malloc(b);
	if (ptrs == NULL)
	{
		exit(98);
	}
	return (ptrs);
}
