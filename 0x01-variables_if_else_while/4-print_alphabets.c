#include <stdio.h>

/**
 * main - prints alphabets in lowercase, exempting "q" and "e"
 * followed by a new line
 * Return: should always return 0 (Success)
 */
int main(void)
{
	char alphabets;

	for
		(alphabets = 'a';
		 alphabets <= 'z';
		 alphabets++);
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
			putchar(alphabets);
		}
	}

	putchar('\n');  /* Prints a newline character */

	return (0);
}
