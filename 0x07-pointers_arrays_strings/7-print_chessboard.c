#include "main.h"

/**
 * print_chessboard - display a chessboard
 * @a: a pointer to an 8x8 chessboard
 * Return: no return value
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int row_start = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			row_start = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - row_start]);
	}
	_putchar('\n');
}
