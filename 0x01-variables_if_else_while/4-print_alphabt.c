#include <stdio.h>

/**
 * main - prints alphabets in lowercase, exempting "q" and "e"
 * followed by a new line
 * Return: should always return 0 (Success)
 */
int main(void)
{
	char alphabts;

	for
		(alphabts = 'a';
		 alphabts <= 'z';
		 alphabts++)
	{
		if (alphabts != 'q' && alphabts != 'e')
		{
			putchar(alphabts);
		}
	}

	putchar('\n');  /* Prints a newline character */

	return (0);
}
