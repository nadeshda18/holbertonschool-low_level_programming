#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of two diagonals
 * @a: pointer
 * @size: integer
 */
void print_diagsums(int *a, int size)
{
	int i, j, princ, sec;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				princ = a[i] + a[j];
			}

			if ((i + j) == (size - 1))
			{
				sec = a[i] + a[j];
			}
		}
	}
	printf("%d, %d\n", princ, sec);
}
