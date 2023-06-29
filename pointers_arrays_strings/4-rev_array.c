#include "main.h"
#include <stdio.h>
/**
 * reverse_array - of integers
 * @a: pointer
 * @n: number of elements of array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
