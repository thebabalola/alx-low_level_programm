#include "main.h"

/**
 * print_triangle - This function prints a triangle
 * @size: The number of lines in the triangle.
 * Return: No specific return value.
 */
void print_triangle(int size)
{
int e, f;

for (e = 0; e < size; e++)
{
for (f = 1; f < (size - e); f++)
_putchar(' ');
for (f--; f < size; f++)
_putchar(35);  /* Here, 35 represents the '#' character */
if (e < (size - 1))
_putchar('\n');
}
_putchar('\n');
}
