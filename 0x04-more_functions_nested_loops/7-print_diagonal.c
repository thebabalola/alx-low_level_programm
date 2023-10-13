#include "main.h"

/**
 * print_diagonal - This function prints a diagonal line 'n' times.
 * @n: The number of times the diagonal line is printed.
 * There is no return value.
 */
void print_diagonal(int n)
{
	int row, spaces, diagonalChar;

	for (row = 0; row < n; row++)
	{
		for (spaces = 0; spaces < row; spaces++)
		{
			_putchar(' '); /* Print a space for each row except the first */.
		}
		diagonalChar = 92; /* The ASCII value 92 represents a bar */
		_putchar(diagonalChar);

		if (row < (n - 1))
			_putchar('\n'); /* Print a newline character */
	}

	_putchar('\n'); /* Prints an extra newline character at the end.*/
}
