#include "main.h"
#include <stdio.h>

/**
 * main - This program calculates and prints large number
 * Return: Always return (o) on success
 */

int main(void)
{
	long int number = 612852475143;
	long int largest_pf;

	for (largest_pf = 2; largest_pf <= number; largest_pf++)
	{
		if (number % largest_pf == 0)
		{
			number /= largest_pf;
			largest_pf--;
		}
	}

	printf("%ld\n", largest_pf);
	return (0);
}
