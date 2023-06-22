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
	for (; n != 98;)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
