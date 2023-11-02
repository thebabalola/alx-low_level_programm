#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates array of integers within a given range.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: pointer to newly created array, or NULL in case of errors.
 * If min is greater than max, it returns NULL.
 * If memory allocation (malloc) fails, it returns NULL.
 */

int *array_range(int min, int max)
{
	int *arrays;
	int i;

	if (min > max)
		return (NULL);

	arrays = malloc(sizeof(*arrays) * ((max - min) + 1));

	if (arrays == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arrays[i] = min;

	return (arrays);
}
