#include "main.h"

/**
 * _puts_recursion - Recursively prints a string followed by a newline.
 * @s: The input string to print.
 *
 * This function recursively prints each character of the string followed by
 * a newline until the end of the string is reached.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);  /* Print the current character */
	    _puts_recursion(s + 1);  /* Move to the next character */
	}
	else
	{
		_putchar('\n');  /* Print newline when end of string is reached */
	}
}
