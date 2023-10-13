#include "main.h"

/**
 * print_line - This function prints a straight line 'n' times.
 * @n: The number of times the straight line is printed.
 * There is no return value.
 */

void print_line(int n)
{
	int iteration;

	for (iteration = 0; iteration < n; iteration++)
	{
		_putchar(95); /* The ASCII value 95 represent underscore character */
	}

	_putchar('\n');
}
