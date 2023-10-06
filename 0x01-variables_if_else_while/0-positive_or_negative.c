#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *Main - The main will serve as the starting or entry point
 *
 *Description - This programs will sort through
 *
 *Return - should also return values in order
 *
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* here goes my code */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		(n < 0);
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
