#include "main.h"

/**
 * leet - encodes a string using 1337 speak
 * @s: input string
 * Return: a pointer to the encoded string
 */

char *leet(char *s)
{
	char *original = "aeotlAEOTL";
	char *leetcode = "4307143071";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; original[j]; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = leetcode[j];
				break;
			}
		}
	}

	return (s);
}
