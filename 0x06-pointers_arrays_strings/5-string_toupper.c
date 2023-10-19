#include "main.h"

/**
 * string_toupper - Convert all lowercase letters in a string to uppercase.
 * @s: The input string to be modified.
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - ('a' - 'A'); /* Convert to uppercase */
		}
		index++;
	}

	return (s);
}
