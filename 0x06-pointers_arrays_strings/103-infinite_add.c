#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number.
 * @n2: The second number.
 * @r: Buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int c1 = 0, c2 = 0, op, bq, dr1, dr2, add = 0;

	while (n1[c1] != '\0')
		c1++;
	while (n2[c2] != '\0')
		c2++;
	if (c1 >= c2)
		bq = c1;
	else
		bq = c2;
	if (size_r <= bq + 1)
		return (0);
	r[bq + 1] = '\0';
	c1--, c2--, size_r--;
	dr1 = n1[c1] - '0';
	dr2 = n2[c2] - '0';

	while (bq >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
			r[bq] = (op % 10) + '0';
		else
			r[bq] = '0';
		if (c1 > 0)
			c1--, dr1 = n1[c1] - '0';
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = n2[c2] - '0';
		else
			dr2 = 0;
		bq--, size_r--;
	}

	if (r[0] == '0')
		return (r + 1);
	else
		return (r);
}
