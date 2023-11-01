#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies two numbers.
 *
 * @argc: Number of command line arguments.
 * @argv: Array containing program command line arguments.
 *
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1); /* Error exit status */
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0); /* Success exit status */
}
