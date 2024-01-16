#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if s1 and s2 are equal, another value if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (result == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		result = s1[i] - s2[i];
		i++;
	}

	return (result);
}
