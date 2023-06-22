#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - starting from 0, print all numbers
 * @n: the number to be printed
 *
 * Return: (0)
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)

		if (n == 98)
		{
			printf("%d, ", n);
			printf("\n");
			break;
		}
		else
		for (; n <= 98; n--)
		{
		printf("%d", n);
		printf("\n");
		}
			if (n == 98)
			{
			printf("%d, ", n);
			printf("\n");
			}
}
