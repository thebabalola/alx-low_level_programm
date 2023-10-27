#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse.
 * @s: the input string
 * Return: no return value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1); /* Recursively call the function */
		_putchar(*s); /* Print each character in reverse */
	}
}
