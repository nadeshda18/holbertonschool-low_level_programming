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
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
		_putchar('#');
		}
	}
	_putchar('\n');
}

