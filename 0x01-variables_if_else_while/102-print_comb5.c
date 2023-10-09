#include <stdio.h>

/**
 * main - prints all possible combination of two two digits
 * followed by a new line
 * Return: should always return 0 (Success)
     */
int main(void)
{
	int numA, numB;

	for (numA = 0; numA <= 98; numA++)
	{
		for (numB = numA + 1; numB <= 99; numB++)
		{

			putchar((numA / 10) + '0');
			putchar((numA % 10) + '0');
			putchar(' ');
			putchar((numB / 10) + '0');
			putchar((numB % 10) + '0');

			if (numA != 98 || numB != 99)
			{
				/* prints comma */
				putchar(',');
				/* prints space */
				putchar(' ');
			};
		}
	}
	/* prints newline character */
	putchar('\n');

	return (0);
}
