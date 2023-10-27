#include "main.h"

/**
 * wildcmp - compares two strings with wildcards.
 * @s1: string 1.
 * @s2: string 2 with optional wildcards (*).
 * Return: 1 if they are identical, 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	/* Checks if s2 starts with '*' & has characts after it while s1 is empty */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}

	/* Checks if both strings are empty, indicating they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* Checks if current characters match, then recursively compare the rest */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* Checks if s2 & explores possibilities (with and without '*' matching) */
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/* If none of the above conditions are met, the strings don't match */
	return (0);
}
