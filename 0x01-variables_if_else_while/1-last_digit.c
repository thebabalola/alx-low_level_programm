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

/*here goes my code*/
	int lastdig = n % 10;

	if (lastdig > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastdig);

	else if (lastdig == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastdig);

	else if (lastdig < 6 && lastdig != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastdig);

	return (0);
}
