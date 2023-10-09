#include <stdio.h>

/**
 * main - prints all possible combination of two digits
 * followed by a new line
 * Return: should always return 0 (Success)
 */

int main(void)
{
	int digi01, digi02;

	for (digi01 = 0; digi01 <= 08; digi01++)
	{
		for (digi02 = digi01 + 1; digi02 <= 09; digi02++)
		{
			/* prints first digit - digi01 */
			putchar(digi01 + '0');
			/* prints second digit - digi02 */
			putchar(digi02 + '0');

			if (digi01 != 08 || digi02 != 09)
			{
				/* prints comma */
				putchar(',');
				/* prints a sapce */
				putchar(' ');
			}
		}
	}

	putchar('\n'); /* prints newline character */

	return (0);
}
