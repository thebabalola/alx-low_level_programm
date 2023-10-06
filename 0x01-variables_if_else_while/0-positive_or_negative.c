#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main function of the program
 * This function checks if a given integer is positive, negative, or zero
 * and prints the result.
 * return 0 if successful.
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
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
