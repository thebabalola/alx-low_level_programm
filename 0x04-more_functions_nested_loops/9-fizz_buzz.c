#include <stdio.h>

/**
 * main - This program prints numbers from 1 to 100
 * Return: Always returns 0.
 */

int main(void)
{
	int number;

	number = 1;
	printf("%d", number);

	for (number = 2; number <= 100; number++)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (number % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", number);
		}
	}

	printf("\n");
	return (0);
}
