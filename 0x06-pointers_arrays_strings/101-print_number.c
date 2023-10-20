#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: There is no return.
 */

void print_number(int n)
{
	unsigned int m, d, count;
	char digit;

	if (n < 0)
	{
		_putchar(45); /* Print '-' for negative numbers */
		m = (unsigned int)(-n); /* Ensure m is treated as an unsigned integer */
	}
	else
	{
		m = (unsigned int)n; /* Ensure m is treated as an unsigned integer */
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		digit = (char)(((m / count) % 10) + 48);
		_putchar(digit); /* Print each digit as a character */
		count /= 10;
	}
}
