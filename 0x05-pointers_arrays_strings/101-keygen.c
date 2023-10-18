#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a keygen.
 * Return: Always returns 0.
 */

int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		putchar((char)r);
	}
	putchar((char)(2772 - c));
	putchar('\n');

	return (0);
}
