#include "main.h"
#include <stdio.h>
/**
 * times_table - print the times table from zero to nine
 *
 * Return: (0)
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y < 10; y++)
	{
	z = x * y;
		if (y == 0)
		{
			_putchar(z + '0');
		}
	if (z <= 10 && y != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
