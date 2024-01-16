#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of a substring in a string.
 *
 * @haystack: the complete string.
 * @needle: the substring to search for.
 *
 * Return: a pointer to the start of the found substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *startHaystack;  /* Start of the string to explore */
	char *startNeedle;    /* Start of the substring to match */

	while (*haystack != '\0')
	{
		startHaystack = haystack;
		startNeedle = needle;

		/* Check if the substring matches the part of the string */
		while (*haystack != '\0' && *startNeedle != '\0'
			   && *haystack == *startNeedle)
		{
			haystack++;
			startNeedle++;
		}

		/* If we reached end of substring, it's a match, so return pointer */
		if (!*startNeedle)
			return (startHaystack);

		/* Move the start of the string to explore by one character */
		haystack = startHaystack + 1;
	}

	/* If the substring was not found, return NULL */
	return (NULL);
}
