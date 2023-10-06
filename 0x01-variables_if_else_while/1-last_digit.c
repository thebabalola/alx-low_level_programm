#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 * Description: prints the value of n; zero, positive or negative
 * Return: should always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

		int LastDigit = n % 10;

		printf("Last digit of %i is %i and is ", n, LastDigit);

		if (LastDigit > 5)
		{
			printf("greater than 5\n");
		} else if (LastDigit == 0)
		{
			printf("0\n");
		} else
		{
			printf("less than 6 and not 0\n");
		}

	return (0);
}
