#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - print lines in a diagonal pattern
 *@n: letter
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		_putchar(92);
		}

	}
	_putchar('\n');
}

