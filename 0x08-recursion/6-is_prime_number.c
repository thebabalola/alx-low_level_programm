#include "main.h"

/**
* is_prime - Recursive helper function to detect if a number is prime.
* @n: The number to check for primality.
* @i: The current divisor to check.
* Return: 1 if n is prime, 0 otherwise.
*/

int is_prime(unsigned int n, unsigned int i)
{
	/* Base case: if n is divisible by i, it's not prime */
	if (n % i == 0)
	{
		/* If i is equal to the current divisor, it's prime */
		if (n == i)
			return (1);
		else
			return (0);
	}
	/* Recursively check with the next divisor */
	return (is_prime(n, i + 1));
}

/**
* is_prime_number - Detects if an input number is a prime number.
* @n: The input number to check for primality.
* Return: 1 if n is prime, 0 otherwise.
*/

int is_prime_number(int n)
{
	/* Special cases for non-prime numbers */
	if (n <= 1)
		return (0);
	/* Call the helper function to determine primality */
	return (is_prime(n, 2));
}
