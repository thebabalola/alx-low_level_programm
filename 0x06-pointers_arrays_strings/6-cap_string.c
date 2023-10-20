#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: Input string.
 * Return: Pointer to the modified string.
 */

char *cap_string(char *s)
{
	int capitalize = 1; /* Flag to capitalize the next letter */

	while (*s)
	{
		if (capitalize && *s >= 'a' && *s <= 'z')
		{
			*s -= 32; /* Convert to uppercase */
			capitalize = 0;
		}

		if (*s == ' ' || *s == '\t' || *s == '\n'
			|| *s == ',' || *s == ';' || *s == '.' ||

			*s == '!' || *s == '?' || *s == '"'
			|| *s == '(' || *s == ')' || *s == '{' || *s == '}')
		{

			capitalize = 1; /* Set the flag to capitalize the next letter */
		}

		s++;
	}

	return (s);
}
