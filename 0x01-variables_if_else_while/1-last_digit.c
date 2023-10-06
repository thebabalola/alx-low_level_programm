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

	int lastdigit = n % 10;

	if
		(lastdigit > 5);
	{
		printf("Last digit of %i is %i and is greater than 5", n, lastdigit);
	}
	else if (lastdigit  == 0)
	{
		printf("Last digit of %i is %i and is 0", n, lastdigit);
	}
	else
		(lastdigit < 6 && lastdigit != 0);
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, lastdigit);
	}
	return (0);
}
