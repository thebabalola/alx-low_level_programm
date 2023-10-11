#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: should always return 0 (Suc/
 */

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);

	_putchar('\n');
}
