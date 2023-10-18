#include "main.h"

/**
 * rev_string - reverse a string in place.
 *
 * @s: input string to be reversed.
 */

void rev_string(char *s)
{
	int length = 0;
	char *start, temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}
	start = s;

	/* Reverse the string by swapping characters */
	for (int i = 0; i < length / 2; i++)
	{
		temp = start[i];
		start[i] = start[length - 1 - i];
		start[length - 1 - i] = temp;
	}
}
