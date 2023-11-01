#include "main.h"

/**
 * _strspn - calculates the length of a prefix substring.
 *
 * @s: the initial string.
 * @accept: the set of accepted characters.
 *
 * Return: number of charact at begin of 's' that matches charact in 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (!found)
		{
			break;
		}
	}

	return (i);
}
