#include <stdio.h>

/**
 * main - prints all single digit num of base 10
 * followed by a new line
 * Return: should always return 0 (Success)
 */
int main(void)
{
	int digi;

	for (digi = 0; digi <= 9; digi++)
	{
		printf("%i\n", digi); /* Prints digit */
	}
	printf("\n"); /* Prints a newline character after all digits */

	return (0);
}
