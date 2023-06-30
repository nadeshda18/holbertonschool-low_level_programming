#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of two diagonals
 * @a: pointer
 * @size: integer
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int princ = 0;
	int sec = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				princ = a[i];
				printf("%d\n", princ);
			}
			if ((i + j) == (size - 1))
			{
				sec = a[i];
				printf("%d\n", sec);
			}
		}
	}
}
