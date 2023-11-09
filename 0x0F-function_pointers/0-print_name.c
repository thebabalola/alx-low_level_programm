#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_name - Prints the name in UPPERCASE using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer for printing the name in UPPERCASE.
 *
 * Description: The function takes a name & a function pointer as parameters.
 * It calls the function pointed to by 'f' to print the name in UPPERCASE.
 * No return value (void).
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	(*f)(name);
}
