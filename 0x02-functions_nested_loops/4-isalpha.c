#include "main.h"

/**
 * _isalpha - will check for alphabetic character
 * @c: is character to be checked
 * Return: 1 if c is a letter, 0 else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
