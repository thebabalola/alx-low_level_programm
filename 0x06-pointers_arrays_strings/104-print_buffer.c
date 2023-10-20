#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 *
 * @b: buffer.
 * @size: size of buffer.
 *
 * Return: has no return.
 */

void print_buffer(char *b, int size)
{
	int j, f, l;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (j = 0; j < size; j += 10)
	{
		printf("%.8x:", j);

		for (f = j; f < j + 10; f++)
		{
			if (f % 2 == 0)
				printf(" ");
			if (f < size)
				printf("%.2x", (unsigned char)b[f]);
			else
				printf("  ");
		}
		printf(" ");

		for (l = j; l < j + 10; l++)
		{
			if (l >= size)
				break;
			if (b[l] < 32 || b[l] > 126)
				printf("%c", '.');
			else
				printf("%c", b[l]);
		}
		printf("\n");
	}
}
