#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - function prints the binary representation
 * of a given unsigned long integer.
 * @n: unsigned long int to be converted and printed.
 *
 * Return: No explicit return value.
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(unsigned long int) * 8 - 1;
	int starts = 0;

	if (n == 0)
		_putchar('0');

	while (bit >= 0)
	{
		if ((n >> bit) & 1)
		{
			_putchar('1');
			starts = 1;
		}
		else if (starts)
			_putchar('0');
		bit--;
	}
}
