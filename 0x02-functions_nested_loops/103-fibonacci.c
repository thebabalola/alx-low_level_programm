#include <stdio.h>

/**
 * main - serves as program entry point
 *
 * Return: should always return 0 (Success)
 */

int main(void)
{
	long int num, x = 1, y = 2, sum = 0, thisSum = 0;

	for (num = 0; num < 49; num++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			thisSum = thisSum + y;
		}

		sum = x + y;
		x = y;
		y = sum;

	}

	printf("%ld\n", thisSum);

	return (0);
}
