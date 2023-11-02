#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and fills it with a given
 * character
 *
 * @size: The size of the array.
 * @c: The character to be stored in the array.
 *
 * Return: A pointer to the created array of characters.
 */

char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	char_array = malloc(sizeof(char) * size);

	if (char_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		char_array[i] = c;
	}

	return (char_array);
}
