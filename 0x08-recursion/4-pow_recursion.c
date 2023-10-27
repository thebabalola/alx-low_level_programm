#include "main.h"

/**
 * _pow_recursion - Returns value of x raised to power of y.
 *
 * @x: The base.
 * @y: The exponent.
 *
 * Return: Value of exponentiation.
 */

int _pow_recursion(int x, int y)
{
	/* Base case 1: If the exponent is negative, return -1. */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case 2: If the exponent is 0, */
	   /* return 1 (any number raised to the power of 0 is 1). */
	else if (y == 0)
	{
		return (1);
	}

	/* Recursive case: Calculate the result by */
	/* multiplying x by the result of the function. */
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
