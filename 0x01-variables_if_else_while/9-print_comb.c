#include <stdio.h>

/**
 * main - prints all possible combinations of single-digi number
 * followed by a new line
 * Return: should always return 0 (Success)
 */
int main(void)
{
	int digi0102;

	for	(digi0102 = 0; digi0102 <= 9; digi0102++)
	{
		putchar(digi0102 + '0');
			if (digi0102 < 9)
			{
				/* prints another comma */
				putchar(',');
				/* prints another space */
				putchar(' ');
			}
	}

	/* Prints newline character */
	putchar('\n');

	return (0);
}
