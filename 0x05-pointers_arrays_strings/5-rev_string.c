#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int length = 0;
	char temp, *start, *end;

	/* Calculate the length of the string */
	while (s[length] != '\0') {
		length++;
	}

	start = s;
	end = s + length - 1;

	/* Swap characters from the start and end of the string */
	while (start < end) {
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
