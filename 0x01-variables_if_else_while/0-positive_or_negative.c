#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *Main - The main function of the program
 *
 *This function checks if a given integer is positive, negative, or zero
 *and should print the result.
 *
 *Return - should return (0) if success.
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
