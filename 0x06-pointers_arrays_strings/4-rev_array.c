#include "main.h"

/**
 * reverse_array - Reverse the content of an integer array.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
	}
}
