#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 * Description: prints the value of n; zero, positive or negative
 * Return: should always 0 as (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastdigi = n % 10;

	/* here goes the code */
	if (lastdigi > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastdigi);

	else if (lastdigi == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastdigi);

	else
		(lastdigi < 6 && lastdigi != 0);
	printf("last digit of %i is %i and is less than 6 and not 0\n", n, lastdigi);

	return (0);
}
