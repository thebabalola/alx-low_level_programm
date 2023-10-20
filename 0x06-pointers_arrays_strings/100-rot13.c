#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @s: Input string
 * Return: Pointer to the encoded string
 */

char *rot13(char *s)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_alpha(s[i]))  /* Check if it's an alphabet character */
		{
			int index = s[i] >= 'a' ? s[i] - 'a' : s[i] - 'A' + 26;

			s[i] = rot13[index];
		}
	}

	return (s);
}

/**
 * is_alpha - Checks if a character is an alphabet character
 * @c: Input character
 * Return: 1 if the character is an alphabet character, 0 otherwise
 */
int is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
