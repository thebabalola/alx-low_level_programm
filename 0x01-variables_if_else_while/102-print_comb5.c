#include <stdio.h>

/**
 * main - prints all possible combination of two two digits
 * followed by a new line
 * Return: should always return 0 (Success)
     */
int main(void)
{
	int numA, numB;

	for (numA = 0; numA <= 8; numA++)
	{
		for (numB = numA + 1; numB <= 9; numB++)
		{
			putchar((numA + '0');  /* prints first digit of charcter */
			putchar((numB + '0');  /* prints second digit of character */

			if (numA != 8 || numB != 9)
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
