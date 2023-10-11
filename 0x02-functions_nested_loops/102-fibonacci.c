#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: should always return 0 (Success)
 */

int main(void)
{
	int num;
	long int fibonaccis[50];

	fibonaccis[0] = 1;
	fibonaccis[1] = 2;

	printf("%ld, %ld, ", fibonaccis[0], fibonaccis[1]);

	for (num = 2; num < 50; num++)
	{
		fibonaccis[num] = fibonaccis[num - 1] + fibonaccis[num - 2];

		if (num == 49)
			printf("%ld\n", fibonaccis[num]);

		else
			printf("%ld, ", fibonaccis[num]);
	}
	return (0);
}
