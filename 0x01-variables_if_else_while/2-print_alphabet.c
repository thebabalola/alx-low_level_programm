#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * followed by a new line
 * Return: should always return 0 (Success)
 */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}

	putchar('\n'); /* Print a newline character to move to the next line */

	return (0);
}
