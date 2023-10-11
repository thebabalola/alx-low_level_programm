#include "main.h"

/**
 * print_times_table - prints n times-table, starting from 0
 * @n: is the number of the times table (0 to 15)
 */
void print_times_table(int n)
{
	int e, f, g;

	if (n < 0 || n > 15)
		return;

	for (e = 0; e <= n; e++)
	{
		for (f = 0; f <= n; f++)
		{
			g = f * e;

			if (f != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (g < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}

			if (g >= 10)
				_putchar((g / 10) + '0');
			else
				_putchar(' ');

			_putchar((g % 10) + '0');
		}

		_putchar('\n');
	}
}
