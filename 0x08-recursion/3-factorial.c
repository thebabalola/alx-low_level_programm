#include "main.h"

/**
 * factorial - returns the factorial of any given number.
 * @n: input number.
 *
 * Return: factorial of the number.
 */
int factorial(int n)
{
	/* Check for invalid input (negative number) */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Recursive case: calculate factorial */
	return (n * factorial(n - 1));
}
