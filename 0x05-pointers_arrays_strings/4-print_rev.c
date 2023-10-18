#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	count--;  /* Move back one character to last character in string */

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}

	_putchar('\n');
}
