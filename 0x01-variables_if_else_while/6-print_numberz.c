#include <stdio.h>

/**
 * main - prints all single digit num of base 10
 * a new line should follow
 * Return: should always return 0 (Success)
 */
int main(void)
{
	int digi;

	/* Print digits from 0 to 9 */
	for (digi = 0; digi <= 9; digi++)
	{
		putchar('0' + digi);
	}

	putchar('\n'); /* Prints a newline character after all digits */

	return (0);
}
