#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard character '*'.
 * @s1: String 1.
 * @s2: String 2. It can contain '*' as a special character.
 * 
 * Return: 1 if the strings are identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	// If s2 starts with '*' and is not at the end, and s1 is at the end, return 0
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	// If both strings reach the end, return 1 (strings are identical)
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	// If the current characters match, continue comparing the rest of the strings
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	// If the current character in s2 is '*', try two possibilities:
	// 1. Continue matching s1 and move to the next character in s2.
	// 2. Move to the next character in s1 and keep s2 at '*'.
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	// If none of the conditions match, return 0 (strings are not identical)
	return (0);
}
