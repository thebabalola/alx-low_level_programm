 #include <stdio.h>

/**
 * main - Prints the count of command line arguments.
 *
 * @argc: Number of command line arguments.
 * @argv: Void for this program
 *
 * Return: 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	/* Output the count of command line argu (excluding the program name). */
	printf("%d\n", argc - 1);
	return (0); /* Indicate success. */
}
