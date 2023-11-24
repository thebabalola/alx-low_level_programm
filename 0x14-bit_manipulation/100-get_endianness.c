#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_endianness - function which checks the endianness of the system
 *
 * Return: 0 if it's big endian, 1 if it's little endian
 */

int get_endianness(void)
{
	unsigned int x = 0x01020304;
	char *c = (char *) &x;

	return ((int)*c);
}
