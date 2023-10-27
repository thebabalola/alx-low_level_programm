#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The input string
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}


/**
 * comparator - Compares characters of the string to check for a palindrome.
 * @s: The input string
 * @n1: The smallest iterator
 * @n2: The largest iterator
 * Return: 1 if the string is a palindrome, 0 if not.
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}


/**
 * is_palindrome - Detects if string is a palindrome.
 * @s: The input string.
 * Return: 1 if 's' is a palindrome, 0 if not.
 */

	int is_palindrome(char *s)
	{
		if (*s == '\0')
			return (1);
		return (comparator(s, 0, _strlen_recursion(s) - 1));
	}
