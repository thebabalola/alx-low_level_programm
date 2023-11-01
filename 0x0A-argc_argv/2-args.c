#include <stdio.h>

/**
 * main - A program that prints all the arguments it receives.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array containing the program's command-line arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
