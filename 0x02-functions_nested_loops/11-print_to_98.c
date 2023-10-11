#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -prints natural numbers from n to 98,
 *
 * followed by a new line
 *
 * @n: print from this number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(", ");
		}
		printf("\n");
	}
}
