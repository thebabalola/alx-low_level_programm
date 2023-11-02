#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with a specified limit.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: pointer to allocated memr or NULL if malloc fails(status value:98).
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sOut;
	unsigned int ls1 = 0, ls2 = 0, lsOut, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ls1] != '\0')
		ls1++;

	while (s2[ls2] != '\0')
		ls2++;

	if (n > ls2)
		n = ls2;

	lsOut = ls1 + n;

	sOut = malloc(lsOut + 1);

	if (sOut == NULL)
		return (NULL);

	for (i = 0; i < lsOut; i++)
	{
		if (i < ls1)
			sOut[i] = s1[i];
		else
			sOut[i] = s2[i - ls1];
	}

	sOut[i] = '\0';

	return (sOut);
}
