#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through arrays and prints arrays.
 * @array: the array to print.
 * @size: prints the size of the array.
 * @action: function to apply to each array element.
 * Return: no return value.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
	}
}
