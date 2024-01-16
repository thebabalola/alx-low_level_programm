#include "main.h"

/**
 * _isdigit - checks if the parameter is a digit between 0 and 9.
 * @c: The character to check
 * Return: 1 if it's a digit (0 to 9), 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
