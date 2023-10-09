#include <stdio.h>

/**
 * main - prints all posible combinations of 3 digits
 * followed by a new line
 * Return: should always return 0 (Success)
 */

int main(void)
{
	int digi01, digi02, digi03;

	for (digi01 = 0; digi01 <= 3; digi01++)
	{
		for (digi02 = digi01 + 1; digi02 <= 5; digi02++)
		{
			for (digi03 = digi03 + 1; digi03 <= 7; digi02++)
			{
			/* prints first digit - digi01 */
			putchar(digi01 + '0');
			/* prints second digit - digi02 */
			putchar(digi02 + '0');
			/* prints third digit - digi03 */
			putchar(digi03 + '0');

			if (digi01 != 3 || digi02 != 5 || digi03 != 7)
			{
				/* prints comma */
				putchar(',');
				/* prints a sapce */
				putchar(' ');
			}
			}
		}
	}

	putchar('\n'); /* prints newline character */

	return (0);
}
