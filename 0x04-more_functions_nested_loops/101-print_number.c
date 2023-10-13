#include "main.h"

/**
 * print_number - This function prints an integer.
 * @n: The input integer to be printed.
 * Return: No return value.
 */

void print_number(int n)
{
		unsigned int mag, dig, div;

		if (n < 0)
		{
			_putchar(45); /* Print a minus sign for negative numbers */
			mag = n * -1;  /* Get the magnitude of the negative number */
		}
		else
		{
			mag = n;  /* Use the original number for positive numbers */
		}

		dig = mag;
		div = 1;

		/* Calculate the divisor for extracting digits */
		while (dig > 9)
		{
			dig /= 10;
			div *= 10;
		}

		/* Extract and print each digit */
		for (; div >= 1; div /= 10)
		{
			_putchar(((mag / div) % 10) + 48);  /* Print the digit */
		}
	}
