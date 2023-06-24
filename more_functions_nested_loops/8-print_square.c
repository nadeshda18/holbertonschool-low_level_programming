#include "main.h"
#include <stdio.h>
/**
 * print_square - print squares
 * @size: the square
 *
 * Return: void)
 */
void print_square(int size)
{
	int i, a;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
