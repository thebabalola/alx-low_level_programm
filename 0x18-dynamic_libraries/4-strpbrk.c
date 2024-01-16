#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search a string for specific characters.
 *
 * @s: the main string to search.
 * @accept: a set of characters to look for.
 *
 * Return: a pointer to the first matching character in the main string,
 * or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
