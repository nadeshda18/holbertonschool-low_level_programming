#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print time table without zero or fifteen
 *@n: number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int y, z;

	for (; n < 10; n++)
	{
	for (y = 0; y < 10; y++)
	{
	z = n * y;
		if (y == 0)
		{
		_putchar(y + '0');
		}
	if (z < 0 && z >= 15)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(z + '0');
	}
	else if (z >= 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((z / 10) + '0');
		_putchar((z % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
