#include <stdio.h>

/**
 * main - prints all possible combination of two two digits
 * followed by a new line
 * Return: should always return 0 (Success)
 */
int main(void)
{
	int numA, numB;

	for (numA = 0; numA <= 49; numA++)
	{
		for (numB = numA + 1; numB <= 49; numB++)
		{
			putchar((numA / 10) + '0');  /* Prints tens digit of numA */
			putchar((numA % 10) + '0');  /* Prints ones digit of numA */
			putchar(' ');                   /* Prints a space */
			putchar((numB / 10) + '0');  /* Prints tens digit of numB */
			putchar((numB % 10) + '0');  /* Prints ones digit of numB */

			if (numA != 48 || numB != 59)
			{
				/* prints comma */
				putchar(',');
				/* prints space */
				putchar(' ');
			}
		}
	}
	/* prints newline character */
	putchar('\n');

	return (0);
}
