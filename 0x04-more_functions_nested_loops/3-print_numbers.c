#include "main.h"

/**
 * print_numbers - This function prints numbers from 0 to 9.
 * Return: This function has no return value.
 */

void print_numbers(void)
{
	int character;

	for (character = 48; character < 58; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
