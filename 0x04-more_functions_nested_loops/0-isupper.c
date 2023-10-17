#include "main.h"

/**
 *File: 0-isupper.c
 * _isupper - Determines if a character is in uppercase.
 * @c: The character to be examined.
 * Description: This function checks if the character 'c
 * Return: 1 if the character is uppercase, 0 if it's not.
 */

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
