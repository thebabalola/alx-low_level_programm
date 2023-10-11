#include <stdio.h>

/**
 * main - serves as program entry point
 *
 * Return: should always return 0 (Success)
 */

int main(void)
{
	unsigned long int e, f, g, f1, f2, g1, g2;

	f = 1;
	g = 2;

	printf("%lu", f);

	for (e = 1; e < 91; e++)
	{
		printf(", %lu", g);
		g = g + f;
		f = g - f;
	}

	f1 = f / 1000000000;
	f2 = f % 1000000000;
	g1 = g / 1000000000;
	g2 = g % 1000000000;

	for (e = 92; e < 99; ++e)
	{
		printf(", %lu", g1 + (g2 / 1000000000));

		printf("%lu", g2 % 1000000000);

		g1 = g1 + f1;
		f1 = g1 - f1;
		g2 = g2 + f2;
		f2 = g2 - f2;
	}

	printf("\n");

	return (0);
}
