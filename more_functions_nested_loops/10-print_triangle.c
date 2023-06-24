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
	int j, i;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (j = 1; j < size; j++)
			{
			_putchar(' ');
			}

			for (i = 1; i <= j; i++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}
