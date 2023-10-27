#include "main.h"

/**
* power_operation - Helper function to find the square root recursively.
* @n: The number for which we want to find the square root.
* @i: Iterator.
* Return: Square root or -1 if not found.
*/

int power_operation(int n, int i)
{
	if (i * i == n)  /* Check if i is the square root of n */
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (power_operation(n, i + 1));  /* Recursively search for sqrt */
	}
}

/**
* _sqrt_recursion - Returns natural square root of a number.
* @n: The input number.
* Return: The natural square root or -1 if not found.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)  /* Check for negative input */
	{
		return (-1);
	}
	if (n == 0 || n == 1)  /* Base cases */
	{
		return (n);
	}
	return (power_operation(n, 2));  /* Calls helper funct to find sqrt root */
}
