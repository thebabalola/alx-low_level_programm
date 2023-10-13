#include "main.h"

/**
 * print_square - This function prints a square composed of hash symbols.
 * @size: The size of the square.
 * There is no return value.
 */
void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar(35); /* Print a hash symbol */
		}
		if (row != size - 1)
			_putchar('\n'); /* Print a newline character */
	}
	_putchar('\n'); /* Print an extra newline character */
}
