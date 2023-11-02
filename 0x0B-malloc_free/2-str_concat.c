#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings and return the result as a new string.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: A pointer to an array of characters (the concatenated string).
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenates;
	unsigned int len_s1, len_s2, i, j;

	/* Handle NULL input strings by treating them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of the input strings */
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	/* Allocate memory for the concatenated string */
	concatenates = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	/* Check if memory allocation was successful */
	if (concatenates == NULL)
	{
		return (NULL);  /* Allocation failed, return NULL */
	}

	/* Copy characters from s1 to concatenated */
	for (i = 0; i < len_s1; i++)
	{
		concatenates[i] = s1[i];
	}

	/* Copy characters from s2 to concatenated */
	for (j = 0; j < len_s2; j++)
	{
		concatenates[i + j] = s2[j];
	}

	/* Add a null terminator to the end of the concatenated string */
	concatenates[len_s1 + len_s2] = '\0';

	return (concatenates);
}
