#include "main.h"
#include <stdio.h>
/**
 * print_triangle - with squares
 * @size: the name
 *
 * Return: (0)
 */
void print_triangle(int size)
{
	int j, i, k;

	if (size > 0 && size != 1)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = (size -j); i > 0; i--)
			_putchar(' ');
			for (k = 0; k < j; k++)
			_putchar('#');
			_putchar('\n');
		}
	}
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
	_putchar('\n');
}
