#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * followed by a new line
 * Return: should always return 0 (Success)
 */
int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
	{
		/* Prints lowercase letter in reverse */
		putchar(alphab);
	}

	putchar('\n');

	return (0);
}
